/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_UUIDS_UUID_H_
#define _ISHIKO_CPP_UUIDS_UUID_H_

#include <boost/uuid/uuid.hpp>
#include <ostream>
#include <string>

namespace Ishiko
{
namespace UUIDs
{

class UUID
{
public:
    UUID();
    UUID(const boost::uuids::uuid& uuid);
    UUID(const std::string& uuid);
    UUID(const char* uuid);

    bool isNil() const noexcept;

    bool operator==(const UUID& other) const;
    bool operator!=(const UUID& other) const;

    std::string toString() const;

private:
    boost::uuids::uuid m_uuid;
};

std::ostream& operator<<(std::ostream& os, const UUID& uuid);

}
}

#endif
