/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the implementation file for the class Student.  It creates a Student object
and uses People's functions to return the data.  doWork() and gpaOrRating() are overridden virtual
functions in People.
**************************************************************************************************/

#include"Student.hpp"
#include<iostream>
using std::cout;
using std::endl;

//constructor sets the name, age, and GPA of a student
Student::Student(string n, int a, double num) : People(n, a, num)
{
	name = n;
	age = a;
	number = num;
}

//overridden function from People prints the specific number of
//hours a Student did work
void Student::doWork(int x)
{
	//random number from 1 to X for number of hours
	int randNum = rand() % (x + 1);

	cout << this->getName() << " did " << randNum << " hours of homework." << endl;
}

//overridden function from People returns the specific
//GPA of a student
void Student::gpaOrRating()
{
	cout << "GPA: " << this->number << endl;
}