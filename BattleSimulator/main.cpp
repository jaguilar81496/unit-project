#include "base_unit.h"
#include "melee_unit.h"
#include "ranged_unit.h"
#include <iostream>

int main()
{
	BaseUnit* unit = new RangedUnit();

	Position pos = unit->getPosition();
	std::cout << "Unit says: " << unit->getIdentity() << std::endl;
	std::cout << "Unit does " << unit->Attack() << " damage!" << std::endl;
	
	/*
	std::cout << "Unit has position " << pos.m_x << ", " << pos.m_y << std::endl;
	



	unit->setPosition(Position(55, 55));
	pos = unit->getPosition();
	std::cout << "Unit has position " << pos.m_x << ", " << pos.m_y << std::endl;
	*/
	system("pause");
	return 0;

}

