/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#include "UUIDVersion4Generator.h"

using namespace Ishiko;

UUID UUIDVersion4Generator::generate(Error& error)
{
    return m_generator();
}
