/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the header file for the class Instructor.  It inherits People and overrides
2 virtual functions in People.
**************************************************************************************************/

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP
#include"People.hpp"

class Instructor : public People
{
private:

public:
	Instructor(string, int, double);
	void gpaOrRating();
	void doWork(int);
};

#endif