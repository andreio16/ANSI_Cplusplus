// Basics_00.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "functions.h"
#include <iostream>

using namespace std;
int main()
{
	print_data_types_size();
	print_christmas_tree();
	print_smart_christmas_tree(10);
	print_christmas_tree(); 

	float x = 0;
	newline();
	cout << "Exercise 1)\tEquation : x^2 / (x - 1) \n x=";
	cin >> x;
	cout << ">Result = " << equation1(x) << "\n";
	cout << ">Fractional part : " << fracional_part_of_number(equation1(x)) << "\n";

	newline();
	cout << "Exercise 2)\tMiddle value from (17, 33, 9) = " << middle_value(17, 33, 9) << "\n";
	newline();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


