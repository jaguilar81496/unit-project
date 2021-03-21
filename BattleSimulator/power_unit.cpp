#include "power_unit.h"

PowerUnit::PowerUnit()
    :
    BaseUnit()
{}

PowerUnit::~PowerUnit()
{}

std::string PowerUnit::getIdentity() const
{
    return "I am a power unit, bro";
}

float PowerUnit::PoweraLevel()
{
    return 5.0f;
}
