/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the header file for the class Building.
**************************************************************************************************/

#ifndef BUILDING_HPP
#define BUILDING_HPP
#include<string>
using std::string;

class Building
{
private:
	string name, address;
	int squareFoot;

public:
	Building(string, string, int);
	string getName();
	string getAddress();
	int getSquareFoot();
};

#endif