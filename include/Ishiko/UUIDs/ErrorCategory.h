/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_UUIDS_ERRORCATEGORY_H_
#define _ISHIKO_CPP_UUIDS_ERRORCATEGORY_H_

#include <Ishiko/Errors.hpp>

namespace Ishiko
{
namespace UUIDs
{

class ErrorCategory : public Ishiko::ErrorCategory
{
public:
    enum EErrorValues
    {
        eGeneric = -1,
        ePrecomputedUUIDListExhausted = -2
    };

    static const ErrorCategory& Get() noexcept;

    const char* name() const noexcept override;

private:
    ErrorCategory() noexcept = default;
};

void Fail(ErrorCategory::EErrorValues value, Error& error) noexcept;

}
}

#endif
