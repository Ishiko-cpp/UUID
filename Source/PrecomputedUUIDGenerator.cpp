/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "PrecomputedUUIDGenerator.h"

namespace Ishiko
{
namespace UUIDs
{

PrecomputedUUIDGenerator::PrecomputedUUIDGenerator(const std::vector<UUID>& uuids)
    : m_uuids(uuids), m_index(0)
{
}

PrecomputedUUIDGenerator::PrecomputedUUIDGenerator(std::initializer_list<UUID> uuids)
    : m_uuids(uuids), m_index(0)
{
}

UUID PrecomputedUUIDGenerator::generate(Error& error)
{
    return m_uuids[m_index++];
}

}
}
