/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the implementation file for the class Building.  It creates a Bulding
object with a name, address, and square footage value.
**************************************************************************************************/

#include"Building.hpp"

//building constructor sets the name, address, and 
//square footage of building
Building::Building(string n, string a, int sq)
{
	name = n;
	address = a;
	squareFoot = sq;
}

//returns name
string Building::getName()
{
	return name;
}

//returns address
string Building::getAddress()
{
	return address;
}

//returns address
int Building::getSquareFoot()
{
	return squareFoot;
}