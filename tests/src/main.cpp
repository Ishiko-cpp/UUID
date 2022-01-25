/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUIDTests.h"
#include "UUIDVersion4GeneratorTests.h"
#include "PrecomputedUUIDGeneratorTests.h"
#include "Ishiko/UUIDs/linkoptions.h"
#include <Ishiko/Tests/Core.hpp>

using namespace Ishiko::Tests;

int main(int argc, char* argv[])
{
    TestHarness theTestHarness("IshikoUUIDs");

    TestSequence& theTests = theTestHarness.tests();
    theTests.append<UUIDTests>();
    theTests.append<UUIDVersion4GeneratorTests>();
    theTests.append<PrecomputedUUIDGeneratorTests>();

    return theTestHarness.run();
}
