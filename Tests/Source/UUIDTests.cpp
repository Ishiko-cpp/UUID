/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUIDTests.h"
#include "Ishiko/UUIDs/UUID.h"

using namespace Ishiko::Tests;
using namespace Ishiko::UUIDs;

UUIDTests::UUIDTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "UUID tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void UUIDTests::ConstructorTest1(Test& test)
{
    UUID uuid;

    ISHTF_FAIL_IF_NOT(uuid.isNil());
    ISHTF_PASS();
}
