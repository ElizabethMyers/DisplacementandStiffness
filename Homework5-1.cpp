/* Name: Elizabeth
Date: November 2, 2016
Course: CSC 1230
Assignment: Homework 5
Description: Coding a program to perform stiffness and displacement calculations
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	//Define the variables
	double force;
	double stiffness;
	double displacement;
	int calculation;
	//Greet the user and say what program does
	cout << "Welcome! This program will calculate the stiffness of your spring given" << endl;
	cout << "displacement and force, or will calculate displacement given force and" << endl;
	cout << "stiffness to help in the design process" << endl;
	cout << endl;

	//Enter menu
	cout << "Enter the mode of calculations" << endl;
	cout << "1 Calculate the displacement of a spring" << endl;
	cout << "2 Calculate the stiffness of a spring" << endl;
	cout << "3 Quit without calculations" << endl;
	cout << "Your choice (1 - 3): ";
	cin >> calculation;
	cout << endl;
	switch (calculation)
	{
		case 1:
			cout << "You choose to calculate the displacement of a spring!" << endl;
			cout << endl;

			//Ask user for force and stiffness
			cout << "Please enter the force and stiffness of the spring" << endl;
			cin >> force >> stiffness;
			cout << endl;
			//Calculate
			displacement = force / stiffness;

			//Display the calculated displacement in correct units
			cout << fixed << setprecision(2) << endl;
			cout << "The displacement of the spring is " << displacement << " m" << endl;
			cout << endl;

			//Define parameters
			if (displacement > .5 || stiffness < 50)
				cout << "This spring won't work well for this project! Try another spring." << endl;
			else
				cout << "This spring will be perfect for the project!" << endl;
			break;

		case 2:
			cout << "You choose to calculate the stiffness of a spring!" << endl;
			cout << endl;

			//Ask user for force and stiffness
			cout << "Please enter the force and displacement of the spring" << endl;
			cin >> force >> displacement;
			cout << endl;
			//Calculate
			stiffness = force / displacement;

			//Display the calculated displacement in correct units
			cout << fixed << setprecision(2) << endl;
			cout << "The stiffness of the spring is " << stiffness << " N/m" << endl;
			cout << endl;

			//Define parameters
			if (stiffness < 50 || displacement > .5)
				cout << "This spring won't work well for this project! Try another spring." << endl;
			else
				cout << "This spring will be perfect for the project!" << endl;

			break;

		case 3:
			cout << "Thanks for checking out this awesome program! Bye!" << endl;
			return 0;

		default:
			cout << "Invalid option chosen." << endl;

	}

	cout << endl;
	cout << "Thanks for using this program!" << endl;
		return 0;
}