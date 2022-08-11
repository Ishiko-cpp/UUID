/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_UUIDS_UUIDGENERATOR_H_
#define _ISHIKO_CPP_UUIDS_UUIDGENERATOR_H_

#include "UUID.h"
#include <Ishiko/Errors.hpp>

namespace Ishiko
{

class UUIDGenerator
{
public:
    virtual UUID generate(Error& error) = 0;
};

}

#endif
