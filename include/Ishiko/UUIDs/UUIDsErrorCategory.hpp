/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_UUIDS_UUIDSERRORCATEGORY_HPP
#define GUARD_ISHIKO_CPP_UUIDS_UUIDSERRORCATEGORY_HPP

#include <Ishiko/Errors.hpp>

namespace Ishiko
{

class UUIDsErrorCategory : public ErrorCategory
{
public:
    enum class Value
    {
        eGeneric = -1,
        ePrecomputedUUIDListExhausted = -2
    };

    static const UUIDsErrorCategory& Get() noexcept;

    const char* name() const noexcept override;
    std::ostream& streamOut(int value, std::ostream& os) const override;

private:
    UUIDsErrorCategory() noexcept = default;
};

void Fail(UUIDsErrorCategory::Value value, Error& error) noexcept;

}

#endif
