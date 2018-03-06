/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the header file for the class People.  The 2 virtual functions will be
overriden in Student and Instructor.
**************************************************************************************************/

#ifndef PEOPLE_HPP
#define PEOPLE_HPP
#include<string>
using std::string;

class People
{
//protected so that the children classes can access this
protected:
	string name;
	int age;
	double number;

public:
	People(string, int, double);
	string getName();
	int getAge();
	virtual void gpaOrRating();
	virtual void doWork(int);
};

#endif