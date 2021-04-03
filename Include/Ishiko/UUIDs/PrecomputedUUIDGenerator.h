/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_PRECOMPUTEDUUIDGENERATOR_H_
#define _ISHIKO_UUIDS_PRECOMPUTEDUUIDGENERATOR_H_

#include "UUID.h"
#include "UUIDGenerator.h"
#include <initializer_list>
#include <vector>

namespace Ishiko
{
namespace UUIDs
{

class PrecomputedUUIDGenerator : public UUIDGenerator
{
public:
    PrecomputedUUIDGenerator();
    PrecomputedUUIDGenerator(const std::vector<UUID>& uuids);
    PrecomputedUUIDGenerator(std::initializer_list<UUID> uuids);

    UUID generate(Error& error) override;

private:
    std::vector<UUID> m_uuids;
    size_t m_index;
};

}
}

#include "linkoptions.h"

#endif
