/*
    Copyright (c) 2021-2024 Xavier Leclercq
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

const char* UUIDsErrorCategory::message(int ev, char* buffer, size_t len) const noexcept
{
    switch (static_cast<Value>(ev))
    {
    case Value::generic_error:
        return "generic error";

    case Value::precomputed_uuid_list_exhausted:
        return "precomputed UUID list exhausted";

    default:
        return "unknown value";
    }
}

void Ishiko::Fail(UUIDsErrorCategory::Value value, Error& error) noexcept
{
    error.fail(UUIDsErrorCategory::Get(), static_cast<int>(value));
}
