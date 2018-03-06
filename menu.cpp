/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the implementation file for the Menu.  The user has 4 options to choose from.
**************************************************************************************************/

#include"menu.hpp"
#include"input_validation.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int menu()
{
	//holds the user's choice
	int choice;

	cout << "1: Print Information about People" << endl;
	cout << "2: Print Information about Buildings" << endl;
	cout << "3: Choose Someone To Do Work" << endl;
	cout << "4: Quit" << endl;

	cout << "Please enter a number, from 1 to 4, for you choice." << endl;
	//input validation for a positive integer
	choice = getUnsignedInt();

	//if the user enters higher than 4 or lower than 1
	//they must re-enter
	while (choice > 4 || choice < 1)
	{
		cout << "Error.  Please only choose between options 1 through 4." << endl;

		choice = getUnsignedInt();
	}


	//the number the user chooses will be returned
	switch (choice)
	{
	case 1:
		return 1;

	case 2:
		return 2;

	case 3:
		return 3;

	case 4:
		return 4;

	}
}