/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_TESTS_UUIDTESTS_H_
#define _ISHIKO_UUIDS_TESTS_UUIDTESTS_H_

#include <Ishiko/TestFramework/TestFrameworkCore.h>

class UUIDTests : public Ishiko::Tests::TestSequence
{
public:
    UUIDTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
    static void ConstructorTest2(Ishiko::Tests::Test& test);
    static void ConstructorTest3(Ishiko::Tests::Test& test);
    static void ConstructorTest4(Ishiko::Tests::Test& test);
    static void EqualToTest1(Ishiko::Tests::Test& test);
    static void EqualToTest2(Ishiko::Tests::Test& test);
    static void NotEqualToTest1(Ishiko::Tests::Test& test);
    static void NotEqualToTest2(Ishiko::Tests::Test& test);
    static void ToStringTest1(Ishiko::Tests::Test& test);
    static void ToStringTest2(Ishiko::Tests::Test& test);
};

#endif
