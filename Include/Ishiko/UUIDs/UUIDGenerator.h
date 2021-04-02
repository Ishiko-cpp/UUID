/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_UUIDS_UUIDGENERATOR_H_
#define _ISHIKO_UUIDS_UUIDGENERATOR_H_

#include "UUID.h"

namespace Ishiko
{
namespace UUIDs
{

class UUIDGenerator
{
public:
    virtual UUID generate() = 0;
};

}
}

#include "linkoptions.h"

#endif
