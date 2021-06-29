/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_TESTS_UUIDTESTS_H_
#define _ISHIKO_UUIDS_TESTS_UUIDTESTS_H_

#include <Ishiko/Tests/Core.h>

class UUIDTests : public Ishiko::Tests::TestSequence
{
public:
    UUIDTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
    static void ConstructorTest2(Ishiko::Tests::Test& test);
    static void ConstructorTest3(Ishiko::Tests::Test& test);
    static void ConstructorTest4(Ishiko::Tests::Test& test);
    static void IsEqualToOperatorTest1(Ishiko::Tests::Test& test);
    static void IsEqualToOperatorTest2(Ishiko::Tests::Test& test);
    static void IsNotEqualToOperatorTest1(Ishiko::Tests::Test& test);
    static void IsNotEqualToOperatorTest2(Ishiko::Tests::Test& test);
    static void ToStringTest1(Ishiko::Tests::Test& test);
    static void ToStringTest2(Ishiko::Tests::Test& test);
    static void StreamOutputOperatorTest1(Ishiko::Tests::Test& test);
};

#endif
