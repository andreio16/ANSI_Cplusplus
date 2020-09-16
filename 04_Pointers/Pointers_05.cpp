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
	int a[10] = { 1,2,3,4 }, m1 = 4;
	int b[10] = { 11,12,23 }, m2 = 3;
	cout << "Swap 2 vectors (static alloc) : \n";
	cout << "A : "; print_vector(a, m1);
	cout << "B : "; print_vector(b, m2);
	swap_vectors(a, m1, b, &m2);
	cout << "A : "; print_vector(a, m1);
	cout << "B : "; print_vector(b, m2);
	int *c = new int[m1];
	int *d = new int[m2];
	for (int i = 0; i < m1; i++) c[i] = i + 1;
	for (int i = 0; i < m2; i++) d[i] = (i + 1) * 10;
	cout << "Swap 2 vectors (dynamic alloc) : \n";
	cout << "C : "; print_vector(c, m1);
	cout << "D : "; print_vector(d, m2);
	swap_vectors(c, m1, d, &m2);
	cout << "C : "; print_vector(c, m1);
	cout << "D : "; print_vector(d, m2);

	newline();
	cout << "\n[FUNCTIONS THAT RETURN POINTERS] :\n\n";
	int *my_ptr, len;
	cout << "Enter n and then n numbers : ";
	my_ptr = create_input_vect(len);
	cout << "V : "; print_vector(my_ptr, len);
	delete_input_vect(my_ptr);
	cout << "V : "; print_vector(my_ptr, len);

	newline();
	cout << "\n[POINTERS TO FUNCTIONS] :\n\n";
	int(*ptr_f) (int);
	ptr_f = double_nr; cout << "ptr_f(10) = " << ptr_f(10) << endl;
	ptr_f = triple_nr; cout << "ptr_f(10) = " << ptr_f(10) << endl;

	newline();
	cout << "\n[FUNCTION WITH PARAMETER POINTER TO ANOTHER FUNCTION] :\n\n";
	create_random_vect(vect, double_nr, 10);
	type_ptr_func tpf[4] = { sin, cos, tan, abs };
	cout << "x    sin    cos    tan   abs\n";
	for (int x = 0; x <= 30; x += 10)
	{
		cout << x << " ";
		for (int h = 0; h < 4; h++)
		{
			cout.width(6);
			cout.precision(2);
			cout << tpf[h](x);
		}
		cout << endl;
	}

	newline();
	cout << "\n[FUNCTIONS WITH VARIABLE NR OF PARAM] :\n\n";
	cout << calculate((char *)"+++", 1, 2, 3, 4) << endl;
	cout << calculate((char *)"-+-+", -1, 2, -3, 4,-5) << endl;
	cout << calculate((char *)"-+-+--+", -1, 2, -3, 4, -5, 12, 5,-3) << endl;
	cout << sum(4, 1, 2, 3, 4) << endl;
	cout << sum(5, -1, 2, -3, 4, -5) << endl;
}
