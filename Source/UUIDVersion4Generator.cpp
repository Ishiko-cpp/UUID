/*
    Copyright (c) 2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/UUIDs/blob/master/LICENSE.txt
*/

#include "UUIDVersion4Generator.h"

namespace Ishiko
{
namespace UUIDs
{

UUID UUIDVersion4Generator::generate()
{
    return m_generator();
}

}
}
