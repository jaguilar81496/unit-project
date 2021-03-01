#include "ranged_unit.h"

RangedUnit::RangedUnit()
    :
    BaseUnit()
{}

RangedUnit::~RangedUnit()
{}

std::string RangedUnit::getIdentity() const
{
    return "I am a Ranged unit, bro";
}

float RangedUnit::Attack()
{
    return 1.0f;
}