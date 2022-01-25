/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_TESTS_UUIDVERSION4GENERATORTESTS_H_
#define _ISHIKO_UUIDS_TESTS_UUIDVERSION4GENERATORTESTS_H_

#include <Ishiko/Tests/Core.hpp>

class UUIDVersion4GeneratorTests : public Ishiko::Tests::TestSequence
{
public:
    UUIDVersion4GeneratorTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
    static void GenerateTest1(Ishiko::Tests::Test& test);
};

#endif
