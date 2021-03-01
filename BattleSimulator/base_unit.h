#ifndef BASE_UNIT_H
#define BASE_UNIT_H

#include "position.h"
#include <string>

/*!
* @brief Represents different types of weapons
*/
enum MELEE_WEAPON_TYPE
{
	AXE = 0,
	BROADSWORD,
};


/*!
* @brief Base unit class with all things common to all derived types of units
*/
class BaseUnit
{
public:
	/*!
	* @brief Constructor
	*/
	BaseUnit();
	
	/*!
	* @brief Destructor
	*/
	~BaseUnit();


	void doStuff();
	
	virtual std::string getIdentity() const;

	Position getPosition() const;
	void setPosition(Position position);


	virtual float Attack() = 0;

protected:
	Position m_position;

private:

	

};

#endif
