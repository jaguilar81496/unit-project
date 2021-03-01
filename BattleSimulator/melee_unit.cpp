#include "melee_unit.h"

MeleeUnit::MeleeUnit()
    :
    BaseUnit()
{}

MeleeUnit::~MeleeUnit()
{}

std::string MeleeUnit::getIdentity() const
{
    return "I am a melee unit, bro";
}

float MeleeUnit::Attack()
{
    return 2.0f;
}
