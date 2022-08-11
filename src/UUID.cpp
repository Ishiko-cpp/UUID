/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUID.h"
#include <boost/uuid/nil_generator.hpp>
#include <boost/uuid/string_generator.hpp>
#include <boost/uuid/uuid_io.hpp>

using namespace Ishiko;

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

UUID::UUID(const char* uuid)
    : m_uuid(boost::uuids::string_generator()(uuid))
{
}

bool UUID::isNil() const noexcept
{
    return m_uuid.is_nil();
}

bool UUID::operator==(const UUID& other) const
{
    return (m_uuid == other.m_uuid);
}

bool UUID::operator!=(const UUID& other) const
{
    return (m_uuid != other.m_uuid);
}

std::string UUID::toString() const
{
    return boost::uuids::to_string(m_uuid);
}

std::ostream& Ishiko::operator<<(std::ostream& os, const UUID& uuid)
{
    os << uuid.toString();
    return os;
}
