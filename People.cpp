/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the implementation file for the class People.  It creates a People object
with a name, age, and a number than can either be a GPA or Rating. doWork() and gpaOrRating()
are undefined because they are overridden in the children classes.
**************************************************************************************************/

#include"People.hpp"

//people constructor sets the name, age, and number(GPA or Rating)
//of a person
People::People(string n, int a, double num)
{
	name = n;
	age = a;
	number = num;
}

//returns name
string People::getName()
{
	return name;
}

//returns age
int People::getAge()
{
	return age;
}

//virtual function overridden in children class
void People::gpaOrRating()
{

}

//virtual function overridden in children class
void People::doWork(int x)
{
	
}