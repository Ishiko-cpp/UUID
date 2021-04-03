/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_UUID_H_
#define _ISHIKO_UUIDS_UUID_H_

#include <boost/uuid/uuid.hpp>
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

    std::string toString();

private:
    boost::uuids::uuid m_uuid;
};

}
}

#include "linkoptions.h"

#endif
