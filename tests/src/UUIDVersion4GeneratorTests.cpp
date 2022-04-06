/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUIDVersion4GeneratorTests.h"
#include "Ishiko/UUIDs/UUIDVersion4Generator.h"
#include <Ishiko/Errors.hpp>

using namespace Ishiko;
using namespace Ishiko::UUIDs;

UUIDVersion4GeneratorTests::UUIDVersion4GeneratorTests(const TestNumber& number, const TestContext& context)
    : TestSequence(number, "UUIDVersion4Generator tests", context)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("generate test 1", GenerateTest1);
}

void UUIDVersion4GeneratorTests::ConstructorTest1(Test& test)
{
    UUIDVersion4Generator generator;

    ISHIKO_TEST_PASS();
}

void UUIDVersion4GeneratorTests::GenerateTest1(Test& test)
{
    UUIDVersion4Generator generator;

    Error error;
    UUID uuid = generator.generate(error);

    ISHIKO_TEST_FAIL_IF(error);
    ISHIKO_TEST_FAIL_IF(uuid.isNil());
    ISHIKO_TEST_PASS();
}
