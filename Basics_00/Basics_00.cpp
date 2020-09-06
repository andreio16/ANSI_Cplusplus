// Basics_00.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "functions_00.h"
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

	quadratic_eq p;
	calculate_roots(&p, 1, -7, 6);
	cout << "Exercise 3) Solutions for quadratic equation : (" << p.x1 << ", " << p.x2 << ")\n";
	newline();

	cout << "Exercise 4) Print the following series \"1010101..\"(3 dif ways)\n";
	print_101010_v1(10);
	print_101010_v2(10);
	print_101010_v3(10);
	newline();

	cout << "Exercise 5) Print the following series \"1248..\"\n";
	print_1248(20);
	newline();

	cout << "Exercise 6) Print ASCII codes.\n";
	print_ASCII_codes();
	newline();

	cout << "Exercise 7) Print digits from number.\n";
	print_revert_digits_number(1234567);
	newline();

	cout << "Exercise 8) Print divisors.\n";
	print_divisors(120);
	newline();

	cout << "Exercise 9) Check if a number is prime. \n Calculate cmmdc and cmmmc of 2 numbers.\n Calculate factorial.\n";
	check_prime_number(120);
	cout << "cmmdc(24, 36)= " << cmmdc(24, 36) << endl;
	cout << "cmmmc(24, 36)= " << cmmmc(24, 36) << endl;
	for (int i = 1; i <= 5; i++)
		cout << "factorial(" << i << ")= " << factorial(i) << endl;
	newline();

	cout << "Exercise 10) Play with digits.\n";
	cout << "sum_of_digits(897836)= " << sum_of_digits(897836) << endl;
	cout << "mul_of_even_digits(897836)= " << mul_of_even_digits(897836) << endl;
	cout << "first_digit_number(897836)= " << first_digit_number(897836) << endl;
	cout << "first_digit_counter(897836)= " << first_digit_counter(897836) << endl;
	cout << "max_digit_from_number(897836)= " << max_digit_from_number(897836) << endl;
	cout << "min_digit_from_number(897836)= " << min_digit_from_number(897836) << endl;
	cout << "count_min_digit_from_number(897836)= " << count_min_digit_from_number(897836) << endl;
	check_for_same_digits(123, 11321);
	newline();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


