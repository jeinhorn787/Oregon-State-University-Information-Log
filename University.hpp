/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the header file for the class University.
**************************************************************************************************/

#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP
#include"Student.hpp"
#include"Instructor.hpp"
#include"Building.hpp"
#include<vector>
using std::vector;

class University
{
private:
	vector<People*> people;
	vector<Building> buildings;
	string name = "Oregon State University";

public:
	void addPeople(People*);
	void addBuilding(Building);
	void printPeople();
	void printBuildings();
	vector<People*> getVector();
};

#endif