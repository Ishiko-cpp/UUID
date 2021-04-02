/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUIDVersion4GeneratorTests.h"
#include "Ishiko/UUIDs/UUIDVersion4Generator.h"

using namespace Ishiko::Tests;
using namespace Ishiko::UUIDs;

UUIDVersion4GeneratorTests::UUIDVersion4GeneratorTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "UUIDVersion4Generator tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("generate test 1", GenerateTest1);
}

void UUIDVersion4GeneratorTests::ConstructorTest1(Test& test)
{
    UUIDVersion4Generator generator;

    ISHTF_PASS();
}

void UUIDVersion4GeneratorTests::GenerateTest1(Test& test)
{
    UUIDVersion4Generator generator;

    UUID uuid = generator.generate();

    ISHTF_FAIL_IF(uuid.isNil());
    ISHTF_PASS();
}
