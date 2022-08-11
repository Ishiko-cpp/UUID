/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUIDsErrorCategory.hpp"

using namespace Ishiko;

const UUIDsErrorCategory& UUIDsErrorCategory::Get() noexcept
{
    static UUIDsErrorCategory theCategory;
    return theCategory;
}

const char* UUIDsErrorCategory::name() const noexcept
{
    return "Ishiko::UUIDsErrorCategory";
}

std::ostream& UUIDsErrorCategory::streamOut(int value, std::ostream& os) const
{
    switch (static_cast<Value>(value))
    {
    case Value::eGeneric:
        os << "generic error";
        break;

    case Value::ePrecomputedUUIDListExhausted:
        os << "precomputed UUID list exhausted";
        break;

    default:
        os << "unknown value";
        break;
    }
    return os;
}

void Ishiko::Fail(UUIDsErrorCategory::Value value, Error& error) noexcept
{
    error.fail(UUIDsErrorCategory::Get(), static_cast<int>(value));
}
