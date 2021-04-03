/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_UUIDVERSION4GENERATOR_H_
#define _ISHIKO_UUIDS_UUIDVERSION4GENERATOR_H_

#include "UUIDGenerator.h"
#include <boost/uuid/random_generator.hpp>

namespace Ishiko
{
namespace UUIDs
{

class UUIDVersion4Generator : public UUIDGenerator
{
public:
    UUID generate(Error& error) override;

private:
    boost::uuids::random_generator m_generator;
};

}
}

#include "linkoptions.h"

#endif
