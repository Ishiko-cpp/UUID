/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "PrecomputedUUIDGeneratorTests.h"
#include "Ishiko/UUIDs/PrecomputedUUIDGenerator.h"
#include <Ishiko/Errors.hpp>

using namespace Ishiko;
using namespace Ishiko::Tests;
using namespace Ishiko::UUIDs;

PrecomputedUUIDGeneratorTests::PrecomputedUUIDGeneratorTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "PrecomputedUUIDGenerator tests", context)
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

    ISHIKO_PASS();
}

void PrecomputedUUIDGeneratorTests::ConstructorTest2(Test& test)
{
    PrecomputedUUIDGenerator generator({"6ba7b810-9dad-11d1-80b4-00c04fd430c8"});

    ISHIKO_PASS();
}

void PrecomputedUUIDGeneratorTests::GenerateTest1(Test& test)
{
    PrecomputedUUIDGenerator generator;

    Error error;
    UUID uuid = generator.generate(error);

    ISHIKO_FAIL_IF_NOT(error);
    ISHIKO_FAIL_IF_NOT(uuid.isNil());
    ISHIKO_PASS();
}

void PrecomputedUUIDGeneratorTests::GenerateTest2(Test& test)
{
    PrecomputedUUIDGenerator generator({"6ba7b810-9dad-11d1-80b4-00c04fd430c8"});

    Error error;
    UUID uuid1 = generator.generate(error);

    ISHIKO_FAIL_IF(error);
    ISHIKO_FAIL_IF_NEQ(uuid1.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    UUID uuid2 = generator.generate(error);
    
    ISHIKO_FAIL_IF_NOT(error);
    ISHIKO_FAIL_IF_NOT(uuid2.isNil());

    ISHIKO_PASS();
}

void PrecomputedUUIDGeneratorTests::GenerateTest3(Test& test)
{
    PrecomputedUUIDGenerator generator(
        {"6ba7b810-9dad-11d1-80b4-00c04fd430c8", "6ba7b810-9dad-11d1-80b4-00c04fd430c9" });

    Error error;
    UUID uuid1 = generator.generate(error);

    ISHIKO_FAIL_IF(error);
    ISHIKO_FAIL_IF_NEQ(uuid1.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    UUID uuid2 = generator.generate(error);

    ISHIKO_FAIL_IF(error);
    ISHIKO_FAIL_IF_NEQ(uuid2.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c9");

    UUID uuid3 = generator.generate(error);

    ISHIKO_FAIL_IF_NOT(error);
    ISHIKO_FAIL_IF_NOT(uuid3.isNil());

    ISHIKO_PASS();
}
