/************************************************************************************************
** Program Name: Lab4 (OSU Information System)
** Author: Jeremy Einhorn
** Date: July 20, 2017
** Description: This is the main file.  All Instructor, Student, and Buildings are instantiated
and added to their respective vectors before the Menu even pops up for the user. The user can then
print the info of all the People, print the info of all the Buildings, choose someone to do work, or
quit the program.
**************************************************************************************************/

#include"University.hpp"
#include"input_validation.hpp"
#include"menu.hpp"
#include<iostream>
#include<cstdlib>
#include<ctime>
using std::cout;
using std::endl;

int main()
{
	University uni;
	//needed 1 time for rand function
	srand(time(NULL));

	//variables to hold random doubles from 0.0 to 4.0 for a GPA
	//these variables will be passed to the Student objects
	double rands1 = (double)(rand() % 41) / 10;
	double rands2 = (double)(rand() % 41) / 10;
	double rands3 = (double)(rand() % 41) / 10;
	double rands4 = (double)(rand() % 41) / 10;
	
	//varuables to hold random doubles from 0.0 to 5.0 for Rating
	//these variables will be passed to Instructor objects
	double randi1 = (double)(rand() % 51) / 10;
	double randi2 = (double)(rand() % 51) / 10;
	double randi3 = (double)(rand() % 51) / 10;
	double randi4 = (double)(rand() % 51) / 10;

	//instantiation of Student, Instructor, and Building objects
	Student s1("Jeremy Einhorn", 24, rands1);
	Student s2("Jeff Salomon", 21, rands2);
	Student s3("Tina Fey", 18, rands3);
	Student s4("Lisa Aldridge", 20, rands4);
	Instructor i1("Tim Alcon", 40, randi1);
	Instructor i2("Steve Glass", 35, randi2);
	Instructor i3("Gerald Alfer", 29, randi3);
	Instructor i4("Meryl Streep", 50, randi4);

	Building b1("Adams Hall", "606 SW 15th Street \nCorvallis, OR 97331", 11168);
	Building b2("Covell Hall", "1691 SW Campus Way \nCorvallis, OR 97331", 35760);
	Building b3("McNary Hall", "1220 SW Jefferson Ave \nCorvallis, OR 97331", 71334);
	Building b4("West Hall", "391 SW 30th Street \nCorvallis, OR 97331", 60913);

	//using the University object, all Students and Instructors are added
	//to the People vectors
	uni.addPeople(&s1);
	uni.addPeople(&s2);
	uni.addPeople(&s3);
	uni.addPeople(&s4);
	uni.addPeople(&i1);
	uni.addPeople(&i2);
	uni.addPeople(&i3);
	uni.addPeople(&i4);

	//using the University object, all Buildings are added to the Buildings vector
	uni.addBuilding(b1);
	uni.addBuilding(b2);
	uni.addBuilding(b3);
	uni.addBuilding(b4);

	//variable to hold the users choice
	int choice = menu();

	//while the user does not want to quit
	while (choice != 4)
	{
		//if the user chooses to print the info of all People
		if (choice == 1)
			uni.printPeople();

		//if the user chooses to print the info of all Buildings
		if (choice == 2)
			uni.printBuildings();

		//if the user chooses for someone to do work
		if (choice == 3)
		{
			//variabl to hold user input
			string input;

			cout << "	People To Choose From" << endl;

			//prints all names of People so user can choose who to do work
			for (int person = 0; person < uni.getVector().size(); person++)
				cout << uni.getVector()[person]->getName() << endl;

			cout << endl;
			cout << "Who would you like to do work?  Please type the name exactly"
				" as you see it, keeping in mind case and spaces.  If no match "
				"is found, you will return to the menu." << endl;

			//input validation for a valid string
			input = getString();

			//steps through entire People vector
			for (int person = 0; person < uni.getVector().size(); person++)
			{
				//if the user typed in a name that is the same as
				//someones name in the vector
				//if there is no match, function exits to the menu
				if (input == uni.getVector()[person]->getName())
					//8 hours is max for both Student and Instructor
					uni.getVector()[person]->doWork(8);
			}

		}

		//menu pops up again for users choice
		choice = menu();
	}

	//if the user chooses to exit the program
	if (choice == 4)
		return 0;
}