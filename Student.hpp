/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the header file for the class Student.  It inherits People and overrides
2 functions in People.
**************************************************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP
#include"People.hpp"

class Student : public People
{
private:

public:
	Student(string, int, double);
	void gpaOrRating();
	void doWork(int);
};

#endif