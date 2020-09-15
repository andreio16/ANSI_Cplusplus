// Pointers_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "functions_05.h"
#include <iostream>

int main()
{
	
	newline();
	cout << "\n[POINTER-VECTORS BOUND] :\n\n";
	int vect[10] = { 11, 12, 13, 14, 15, 16 };
	int *p5;
	p5 = vect + 5;	
	cout << "vect : " << *vect << " " << vect[1] << " ";	
	cout << *(vect + 2) << " " << *(3 + vect) << " ";
	cout << 4[vect] << " " << *p5 << endl;
	init_vector(vect, 3);
	cout << "new vect : "; print_vector(vect, 10);

	int *A, n;
	cout << "n=";
	cin >> n;
	A = new int[n];
	init_vector_with_01(A, n);
	print_vector(A, n);
	sort_vector_01(A, n);
	print_vector(A, n);
	delete []A;


	newline();
	cout << "\n[OTHER EXERCISES] :\n\n";
	int B[10][10], k;
	init_mat(B, k);
	print_mat(B, k);
	for (int j = 0; j < k; j++)
		sort_mat(B[j], k);
	print_mat(B, k);

	// Print the days of the week in lexicographic order :
	char days[7][10] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
	cout << "\nOriginal order : ";
	print_week(days);
	cout << "Lexicographic order : ";
	sort_lexicographic(days);
	print_week(days);

	// Swap
	int integer1 = 12, integer2 = 42;
	cout << "Swap 2 integers (" << integer1 << "," << integer2 << ") = ";
	swap_int(&integer1, &integer2);
	cout << "(" << integer1 << ", " << integer2 << ")\n";
	cout << "Swap 2 pointers : ";
	int x = 99, y = 33;
	int *p = &x, *q = &y;
	cout << *p << " " << *q << endl;
	swap_ptr_int(p, q);
	cout << "Result var 1 : " << *p << " " << *q << endl;
	p = &x; 
	q = &y;
	cout << "Pointers restored : "<<*p << " " << *q << endl;
	swap_ptr_int_var2(&p, &q);
	cout << "Result var 2 : " << *p << " " << *q << endl;
}
