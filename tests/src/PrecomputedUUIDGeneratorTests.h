/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_TESTS_PRECOMPUTEDUUIDGENERATORTESTS_H_
#define _ISHIKO_UUIDS_TESTS_PRECOMPUTEDUUIDGENERATORTESTS_H_

#include <Ishiko/TestFramework/Core.hpp>

class PrecomputedUUIDGeneratorTests : public Ishiko::TestSequence
{
public:
    PrecomputedUUIDGeneratorTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void ConstructorTest2(Ishiko::Test& test);
    static void GenerateTest1(Ishiko::Test& test);
    static void GenerateTest2(Ishiko::Test& test);
    static void GenerateTest3(Ishiko::Test& test);
};

#endif
