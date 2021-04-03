/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_TESTS_PRECOMPUTEDUUIDGENERATORTESTS_H_
#define _ISHIKO_UUIDS_TESTS_PRECOMPUTEDUUIDGENERATORTESTS_H_

#include <Ishiko/TestFramework/TestFrameworkCore.h>

class PrecomputedUUIDGeneratorTests : public Ishiko::Tests::TestSequence
{
public:
    PrecomputedUUIDGeneratorTests(const Ishiko::Tests::TestNumber& number,
        const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
    static void ConstructorTest2(Ishiko::Tests::Test& test);
    static void GenerateTest1(Ishiko::Tests::Test& test);
    static void GenerateTest2(Ishiko::Tests::Test& test);
    static void GenerateTest3(Ishiko::Tests::Test& test);
};

#endif
