/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the implementation file for the class Building.  It creates an Instructor
object who has a name, age, and rating and uses People's functions to return this info.
doWork() and gpaOrRating() are overridden from People.
**************************************************************************************************/

#include"Instructor.hpp"
#include<iostream>
using std::cout;
using std::endl;

//constructor sets the name, age, and rating of Instructor
Instructor::Instructor(string n, int a, double num) : People(n, a, num)
{
	name = n;
	age = a;
	number = num;
}

//overridden to print the specific number of hours an
//instructor graded papers
void Instructor::doWork(int x)
{
	//random number from 1 to X for the number of hours
	int randNum = rand() % (x + 1);

	cout << "Instructor " << this->getName() << " graded papers for " << randNum << " hours." << endl;
}

//overridden to print the specific rating of an Instructor
void Instructor::gpaOrRating()
{
	cout << "Instructor Rating: " << this->number << endl;
}