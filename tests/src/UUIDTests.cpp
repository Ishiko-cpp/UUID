/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUIDTests.h"
#include "Ishiko/UUIDs/UUID.h"
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <sstream>

using namespace Ishiko::Tests;
using namespace Ishiko::UUIDs;

UUIDTests::UUIDTests(const TestNumber& number, const TestEnvironment& environment)
    : TestSequence(number, "UUID tests", environment)
{
    append<HeapAllocationErrorsTest>("Constructor test 1", ConstructorTest1);
    append<HeapAllocationErrorsTest>("Constructor test 2", ConstructorTest2);
    append<HeapAllocationErrorsTest>("Constructor test 3", ConstructorTest3);
    append<HeapAllocationErrorsTest>("Constructor test 4", ConstructorTest4);
    append<HeapAllocationErrorsTest>("operator== test 1", IsEqualToOperatorTest1);
    append<HeapAllocationErrorsTest>("operator== test 2", IsEqualToOperatorTest2);
    append<HeapAllocationErrorsTest>("operator!= test 1", IsNotEqualToOperatorTest1);
    append<HeapAllocationErrorsTest>("operator!= test 2", IsNotEqualToOperatorTest2);
    append<HeapAllocationErrorsTest>("toString test 1", ToStringTest1);
    append<HeapAllocationErrorsTest>("toString test 2", ToStringTest2);
    append<HeapAllocationErrorsTest>("operator<< test 1", StreamOutputOperatorTest1);
}

void UUIDTests::ConstructorTest1(Test& test)
{
    UUID uuid;

    ISHIKO_FAIL_IF_NOT(uuid.isNil());
    ISHIKO_PASS();
}

void UUIDTests::ConstructorTest2(Test& test)
{
    boost::uuids::uuid srcUUID = boost::uuids::random_generator()();
    UUID uuid(srcUUID);

    ISHIKO_FAIL_IF_NEQ(uuid.toString(), boost::uuids::to_string(srcUUID));
    ISHIKO_PASS();
}

void UUIDTests::ConstructorTest3(Test& test)
{
    std::string string = "6ba7b810-9dad-11d1-80b4-00c04fd430c8";
    UUID uuid(string);

    ISHIKO_FAIL_IF_NEQ(uuid.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    ISHIKO_PASS();
}

void UUIDTests::ConstructorTest4(Test& test)
{
    UUID uuid("6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    ISHIKO_FAIL_IF_NEQ(uuid.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    ISHIKO_PASS();
}

void UUIDTests::IsEqualToOperatorTest1(Test& test)
{
    UUID uuid1("6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    UUID uuid2("6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    
    ISHIKO_FAIL_IF_NOT(uuid1 == uuid2);
    ISHIKO_PASS();
}

void UUIDTests::IsEqualToOperatorTest2(Test& test)
{
    UUID uuid1("6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    UUID uuid2("6ba7b810-9dad-11d1-80b4-00c04fd430c9");

    ISHIKO_FAIL_IF(uuid1 == uuid2);
    ISHIKO_PASS();
}

void UUIDTests::IsNotEqualToOperatorTest1(Test& test)
{
    UUID uuid1("6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    UUID uuid2("6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    ISHIKO_FAIL_IF(uuid1 != uuid2);
    ISHIKO_PASS();
}

void UUIDTests::IsNotEqualToOperatorTest2(Test& test)
{
    UUID uuid1("6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    UUID uuid2("6ba7b810-9dad-11d1-80b4-00c04fd430c9");

    ISHIKO_FAIL_IF_NOT(uuid1 != uuid2);
    ISHIKO_PASS();
}

void UUIDTests::ToStringTest1(Test& test)
{
    UUID uuid;
    
    ISHIKO_FAIL_IF_NEQ(uuid.toString(), "00000000-0000-0000-0000-000000000000");
    ISHIKO_PASS();
}

void UUIDTests::ToStringTest2(Test& test)
{
    UUID uuid("6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    ISHIKO_FAIL_IF_NEQ(uuid.toString(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    ISHIKO_PASS();
}

void UUIDTests::StreamOutputOperatorTest1(Test& test)
{
    UUID uuid("6ba7b810-9dad-11d1-80b4-00c04fd430c8");

    std::stringstream output;
    output << uuid;

    ISHIKO_FAIL_IF_NEQ(output.str(), "6ba7b810-9dad-11d1-80b4-00c04fd430c8");
    ISHIKO_PASS();
}
