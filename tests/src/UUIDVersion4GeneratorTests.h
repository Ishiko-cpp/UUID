/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_TESTS_UUIDVERSION4GENERATORTESTS_H_
#define _ISHIKO_UUIDS_TESTS_UUIDVERSION4GENERATORTESTS_H_

#include <Ishiko/TestFramework/Core.hpp>

class UUIDVersion4GeneratorTests : public Ishiko::TestSequence
{
public:
    UUIDVersion4GeneratorTests(const Ishiko::TestNumber& number, const Ishiko::TestContext& context);

private:
    static void ConstructorTest1(Ishiko::Test& test);
    static void GenerateTest1(Ishiko::Test& test);
};

#endif
