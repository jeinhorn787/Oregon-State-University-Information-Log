/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the implementation file for the class University.  People* can be added to
the People* vector and Building objects can be added to the Building vector.  It can print the 
info of all the People and Buildings at OSU.
**************************************************************************************************/

#include"University.hpp"
#include<iostream>
using std::cout;
using std::endl;

//adds People* to the People* vector
void University::addPeople(People *p)
{
	people.push_back(p);
}

//adds Building objects to the Building vector
void University::addBuilding(Building b)
{
	buildings.push_back(b);
}

//prints the info of all the People in the People vector
//using gpaOrRating(), it will correctly print if that
//number is a GPA or a Rating
void University::printPeople()
{
	cout << "	People at " << this->name << endl;
	
	//steps through all People in the People vector
	//and prints the individual data
	for (int person = 0; person < people.size(); person++)
	{
		cout << people[person]->getName() << endl;
		cout << "Age: " << people[person]->getAge() << endl;
		people[person]->gpaOrRating();
		cout << endl;
	}
}

//prints all the info of the Buildings in the Building vector
void University::printBuildings()
{
	cout << "	Buildings at " << this->name << endl;
	
	//steps through the Building vector and prints all of the
	//individual data of each object
	for (int building = 0; building < buildings.size(); building++)
	{
		cout << buildings[building].getName() << endl;
		cout << buildings[building].getAddress() << endl;
		cout << buildings[building].getSquareFoot() << " square feet" << endl;
		cout << endl;
	}
}

//returns the People vector (used in main)
vector<People*> University::getVector()
{
	return people;
}