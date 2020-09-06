// Vectors_and_Matrices_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "functions_01.h"
#include <iostream>

int main()
{
	int a[100];
	int b[10] = { 1, 2, 3, 4 };
	float x[] = { 3.14, 2, 4.5 };
	cout << "Vector a uses " << sizeof(a) << " bytes.\n";
	cout << "Vector b uses " << sizeof(b) << " bytes.\n";
	cout << "Vector x uses " << sizeof(x) << " bytes.\n";
	cout << "Vector x has " << sizeof(x)/sizeof(int) << " values.\n";
	newline();

	input_vector(a);
	newline();

	cout << "Vector b : {";  print_vector(b, 4);  cout << "}\n";
	cout << "Reverse vector b : {";  print_reverse_order_vector(b, 4);  cout << "}\n";
	
}

