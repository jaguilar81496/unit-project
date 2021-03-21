#pragma once
#ifndef POWER_UNIT_H
#define POWER_UNIT_H

#include "base_unit.h"

// I added a comment
class PowerUnit : public BaseUnit
{
public:
	PowerUnit();
	~PowerUnit();

	virtual std::string getIdentity() const;

	virtual float PowerLevel();

private:
	MELEE_WEAPON_TYPE m_weapon;
};

#endif
