/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUIDsErrorCategory.hpp"

namespace Ishiko
{
namespace UUIDs
{

const ErrorCategory& ErrorCategory::Get() noexcept
{
    static ErrorCategory theCategory;
    return theCategory;
}

const char* ErrorCategory::name() const noexcept
{
    return "Ishiko::UUIDs::ErrorCategory";
}

std::ostream& ErrorCategory::streamOut(int value, std::ostream& os) const
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

void Fail(ErrorCategory::Value value, Error& error) noexcept
{
    error.fail(ErrorCategory::Get(), static_cast<int>(value));
}

}
}
