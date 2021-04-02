/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUID.h"
#include <boost/uuid/nil_generator.hpp>

namespace Ishiko
{
namespace UUIDs
{

UUID::UUID()
    : m_uuid(boost::uuids::nil_uuid())
{
}

bool UUID::isNil() const noexcept
{
    return m_uuid.is_nil();
}

}
}
