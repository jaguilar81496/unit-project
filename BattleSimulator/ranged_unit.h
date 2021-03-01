#ifndef RANGED_UNIT_H
#define RANGED_UNIT_H

#include "base_unit.h"

class RangedUnit : public BaseUnit
{
public:
	RangedUnit();
	~RangedUnit();

	virtual std::string getIdentity() const;

	virtual float Attack();

private:
};

#endif
