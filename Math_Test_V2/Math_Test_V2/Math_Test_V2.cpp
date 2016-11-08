// Math_Test_V2.cpp : Defines the entry point for the console application.
// This is a simple calculator to either add/subtract/multiply/divide two numbers



#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double First_Number, Second_Number, Sum; //Defining the doubles


	cout << "Give me your first number:" << endl;
	cin >> First_Number; //Accepts the first number

	cout << "Now give me your second number:" << endl;
	cin >> Second_Number; // Accepts the second number
	
	//cout << "Now, what would you like to do with these numbers? " << endl; 
	//cout << "You can either add, subtract, multiply, or divide." << endl; //Queries the user on what they would like to do




	//Division 

	//Sum = First_Number / Second_Number; // Uses the division operator on the numbers 

	//cout << "The result of your division is:" << endl; 
	//cout << Sum << "!" << endl; //Displays the result of the division


	//Subtraction

	Sum = First_Number - Second_Number; //Subtracts the second number from the first number
	cout << "The result of your subtraction is:" <<endl;
	cout << Sum  << "!" << endl;


	//Multiplication

	//Sum = First_Number * Second_Number; //Multiplies the two numbers 

	//cout << "The sum of your multiplication is:" << endl; 
	//cout << Sum << "!" << endl; //Displays the multiplication of the two numbers


	//Addition

	//SumAddition = First_Number + Second_Number; // Adds the two numbers

	//cout << "The sum of your numbers is:" << endl;
	//cout << Sum << "!" << endl; // Displays the sum of the two numbers together

	system("pause"); //Oh Microsoft...

	return 0;
}