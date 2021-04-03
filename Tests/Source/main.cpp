/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUIDTests.h"
#include "UUIDVersion4GeneratorTests.h"
#include "PrecomputedUUIDGeneratorTests.h"
#include <Ishiko/TestFramework/TestFrameworkCore.h>

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
