/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_TESTS_UUIDTESTS_H_
#define _ISHIKO_UUIDS_TESTS_UUIDTESTS_H_

#include <Ishiko/TestFramework/Core.hpp>

class UUIDTests : public Ishiko::TestSequence
{
public:
    UUIDTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void ConstructorTest2(Ishiko::Test& test);
    static void ConstructorTest3(Ishiko::Test& test);
    static void ConstructorTest4(Ishiko::Test& test);
    static void IsEqualToOperatorTest1(Ishiko::Test& test);
    static void IsEqualToOperatorTest2(Ishiko::Test& test);
    static void IsNotEqualToOperatorTest1(Ishiko::Test& test);
    static void IsNotEqualToOperatorTest2(Ishiko::Test& test);
    static void ToStringTest1(Ishiko::Test& test);
    static void ToStringTest2(Ishiko::Test& test);
    static void StreamOutputOperatorTest1(Ishiko::Test& test);
};

#endif
