#ifndef MELEE_UNIT_H
#define MELEE_UNIT_H

#include "base_unit.h"

class MeleeUnit : public BaseUnit
{
public:
	MeleeUnit();
	~MeleeUnit();

	virtual std::string getIdentity() const;

	virtual float Attack();

private:
	MELEE_WEAPON_TYPE m_weapon;
};

#endif
