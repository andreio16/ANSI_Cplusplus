// Recursion_03.cpp : Recursion is an elegant way of resolving problems but it implies a lot of complexity in comparison with an iterative method.
//A recursive function is a function that calls itself during its execution.

#include "functions_03.h"
#include <iostream>

int main()
{
	cout << "[FACTORIAL] :\n\n";
	for (int i = 0; i < 10; i++) 
		cout << i << "! = " << factorial(i) << endl;
	
	newline();
	cout << "\n[2^n] :\n\n";
	for (int i = 0; i < 10; i++)
		cout << "2^" << i << " = " << two_to_pow_n(i) << endl;

	newline();
	cout << "\n[FIBONACCI] :\n\n";
	for (int i = 0; i < 10; i++)
		cout << "fibonacci(" << i << ") = " << fibonacci(i) << endl;

	newline();
	cout << "\n[REVERSE INPUT FROM KEYBOARD] :\n\n";
	reverse_input_chars();
	cout << endl;

	newline();
	cout << "\n[F FUNCTION] :\n\n";
	cout << "f(5,20) = " << f(5, 20) << endl;
	
	newline();
	cout << "\n[OTHERS] :\n\n";
	int a[] = {10, 2, 4, 5, 87, 3, 11};
	cout << "Print vector : ";
	print_vect(a, 6);
	cout << "\nPrint digits : ";
	print_digits(123);
	cout << "\nPrint prime factors for 120 : ";
	prime_factors(120, 2);
	cout << endl;
}

