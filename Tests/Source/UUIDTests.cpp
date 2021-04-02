/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUIDTests.h"

using namespace Ishiko::Tests;

UUIDTests::UUIDTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "UUID tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void UUIDTests::ConstructorTest1(Test& test)
{
}
