/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "PrecomputedUUIDGeneratorTests.h"
#include "Ishiko/UUIDs/PrecomputedUUIDGenerator.h"
#include <Ishiko/Errors/Error.h>

using namespace Ishiko;
using namespace Ishiko::Tests;
using namespace Ishiko::UUIDs;

PrecomputedUUIDGeneratorTests::PrecomputedUUIDGeneratorTests(const TestNumber& number,
    const TestEnvironment& environment)
    : TestSequence(number, "PrecomputedUUIDGenerator tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("generate test 1", GenerateTest1);
    append<HeapAllocationErrorsTest>("generate test 2", GenerateTest2);
    append<HeapAllocationErrorsTest>("generate test 3", GenerateTest3);
}

void PrecomputedUUIDGeneratorTests::ConstructorTest1(Test& test)
{
    std::vector<UUID> uuids = {"6ba7b810-9dad-11d1-80b4-00c04fd430c8"};
    PrecomputedUUIDGenerator generator(uuids);

    ISHTF_PASS();
}

void PrecomputedUUIDGeneratorTests::ConstructorTest2(Test& test)
{
    PrecomputedUUIDGenerator generator({"6ba7b810-9dad-11d1-80b4-00c04fd430c8"});

    ISHTF_PASS();
}

void PrecomputedUUIDGeneratorTests::GenerateTest1(Test& test)
{
    PrecomputedUUIDGenerator generator;

    Error error;
    UUID uuid = generator.generate(error);

    ISHTF_FAIL_IF_NOT(error);
    ISHTF_FAIL_IF_NOT(uuid.isNil());
    ISHTF_PASS();
}

void PrecomputedUUIDGeneratorTests::GenerateTest2(Test& test)
{
    PrecomputedUUIDGenerator generator({"6ba7b810-9dad-11d1-80b4-00c04fd430c8"});

    Error error;
    UUID uuid1 = generator.generate(error);

    ISHTF_FAIL_IF(error);
    ISHTF_FAIL_IF_NEQ(uuid1.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    UUID uuid2 = generator.generate(error);
    
    ISHTF_FAIL_IF_NOT(error);
    ISHTF_FAIL_IF_NOT(uuid2.isNil());

    ISHTF_PASS();
}

void PrecomputedUUIDGeneratorTests::GenerateTest3(Test& test)
{
    PrecomputedUUIDGenerator generator(
        {"6ba7b810-9dad-11d1-80b4-00c04fd430c8", "6ba7b810-9dad-11d1-80b4-00c04fd430c9" });

    Error error;
    UUID uuid1 = generator.generate(error);

    ISHTF_FAIL_IF(error);
    ISHTF_FAIL_IF_NEQ(uuid1.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    UUID uuid2 = generator.generate(error);

    ISHTF_FAIL_IF(error);
    ISHTF_FAIL_IF_NEQ(uuid2.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c9");

    UUID uuid3 = generator.generate(error);

    ISHTF_FAIL_IF_NOT(error);
    ISHTF_FAIL_IF_NOT(uuid3.isNil());

    ISHTF_PASS();
}
