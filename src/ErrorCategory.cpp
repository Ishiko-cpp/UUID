/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "ErrorCategory.h"

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

void Fail(ErrorCategory::EErrorValues value, Error& error) noexcept
{
    error.fail(ErrorCategory::Get(), value);
}

}
}
