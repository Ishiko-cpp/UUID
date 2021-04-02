/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_UUID_H_
#define _ISHIKO_UUIDS_UUID_H_

#include <boost/uuid/uuid.hpp>

namespace Ishiko
{
namespace UUIDs
{

class UUID
{
public:
    UUID();

    bool isNil() const noexcept;

private:
    boost::uuids::uuid m_uuid;
};

}
}

#include "linkoptions.h"

#endif
