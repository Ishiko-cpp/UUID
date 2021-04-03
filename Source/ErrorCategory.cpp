/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
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

void Fail(Error& error, ErrorCategory::EErrorValues value) noexcept
{
    error.fail(value, ErrorCategory::Get());
}

}
}
