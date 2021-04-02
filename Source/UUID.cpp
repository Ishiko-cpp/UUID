/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUID.h"
#include <boost/uuid/nil_generator.hpp>
#include <boost/uuid/string_generator.hpp>
#include <boost/uuid/uuid_io.hpp>

namespace Ishiko
{
namespace UUIDs
{

UUID::UUID()
    : m_uuid(boost::uuids::nil_uuid())
{
}

UUID::UUID(const boost::uuids::uuid& uuid)
    : m_uuid(uuid)
{
}

UUID::UUID(const std::string& uuid)
    : m_uuid(boost::uuids::string_generator()(uuid))
{
}

bool UUID::isNil() const noexcept
{
    return m_uuid.is_nil();
}

std::string UUID::toString()
{
    return boost::uuids::to_string(m_uuid);
}

}
}
