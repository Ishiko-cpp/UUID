/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_UUIDS_UUIDVERSION4GENERATOR_H_
#define _ISHIKO_CPP_UUIDS_UUIDVERSION4GENERATOR_H_

#include "UUIDGenerator.h"
#include <boost/uuid/random_generator.hpp>

namespace Ishiko
{

class UUIDVersion4Generator : public UUIDGenerator
{
public:
    UUID generate(Error& error) override;

private:
    boost::uuids::random_generator m_generator;
};

}

#endif
