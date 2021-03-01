
#include "base_unit.h"


BaseUnit::BaseUnit()
	: m_position()
{
}

BaseUnit::~BaseUnit()
{
}

std::string BaseUnit::getIdentity() const
{
	return "I am a base unit, bro";
}

Position BaseUnit::getPosition() const
{
	return m_position;
}

void BaseUnit::setPosition(Position position)
{
	m_position = position;
}

void BaseUnit::doStuff()
{
	m_position.m_x = 10;
}



