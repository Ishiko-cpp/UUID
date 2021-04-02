/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUIDVersion4GeneratorTests.h"

using namespace Ishiko::Tests;

UUIDVersion4GeneratorTests::UUIDVersion4GeneratorTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "UUIDVersion4Generator tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
}

void UUIDVersion4GeneratorTests::ConstructorTest1(Test& test)
{
}
