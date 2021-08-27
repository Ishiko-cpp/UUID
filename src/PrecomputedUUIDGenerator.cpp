/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "PrecomputedUUIDGenerator.h"
#include "ErrorCategory.h"

namespace Ishiko
{
namespace UUIDs
{

PrecomputedUUIDGenerator::PrecomputedUUIDGenerator()
    : m_index(0)
{
}

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
    if (m_index == m_uuids.size())
    {
        Fail(error, ErrorCategory::ePrecomputedUUIDListExhausted);
        return UUID();
    }
    else
    {
        return m_uuids[m_index++];
    }
}

}
}
