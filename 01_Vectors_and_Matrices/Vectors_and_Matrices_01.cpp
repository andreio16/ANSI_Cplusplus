// Vectors_and_Matrices_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "functions_01.h"
#include <iostream>

int main()
{
	int a[100], c[10], d[10];
	int b[10] = { 1, 2, 3, 4 };
	double x[] = { 3.14, 2, 4.5 };
	char S[100];
	char s[20] = "Hello world!";
	char e[] = "ABC";
	char f[] = { 'x','y','z' };
	cout << "Vector a uses " << sizeof(a) << " bytes.\n";
	cout << "Vector b uses " << sizeof(b) << " bytes.\n";
	cout << "Vector S uses " << sizeof(S) << " bytes.\n";
	cout << "Vector s uses " << sizeof(s) << " bytes.\n";
	cout << "Vector e uses " << sizeof(e) << " bytes.\n";
	cout << "Vector f uses " << sizeof(f) << " bytes.\n";
	cout << "Vector x uses " << sizeof(x) << " bytes.\n";
	cout << "Vector x has " << sizeof(x)/sizeof(double) << " values.\n";
	cout << "Size of one single character ('A') is " << sizeof('A') << " bytes.\n";
	cout << "Size of a string who contains one character (\"A\") is" << sizeof("A") << " bytes.\n";
	newline();
	input_vector(a);
	newline();

	cout << "Vector b : { ";  print_vector(b, 4);  cout << "}\n";
	cout << "Reverse vector b : { ";  print_reverse_order_vector(b, 4);  cout << "}\n";
	cout << "Generate vector : { ";  generate_vector_v1(a, 10); print_vector(a, 10);  cout << "}\n";
	cout << "Generate vector : { ";  generate_vector_v2(a, 10); print_vector(a, 10);  cout << "}\n";
	cout << "Generate vector : { ";  generate_vector_v3(c, 10); print_vector(c, 10);  cout << "}\n"; 
	cout << "Generate vector : { ";  generate_vector_v4(a, 10); print_vector(a, 10);  cout << "}\n";

	cout << "Calculate sum = " << calculate_sum(a, 10) << "\n";
	cout << "Calculate product of even numbers = " << calculate_mul_of_even_elements(a, 10) << "\n";
	cout << "Calculate max value = " << max_value_from_vector(a, 10) << "\n";
	check_asc_fibo_sim(c, 10);

	newline();
	cout << "Vector a : { ";  print_vector(a, 10);  cout << "}\n";
	bubble_sort(a, 10);
	cout << "Bubble sort applied : { ";  print_vector(a, 10);  cout << "}\n";

	newline();
	generate_vector_v2(c, 10);
	cout << "Vector c : { ";  print_vector(c, 10);  cout << "}\n";
	selection_sort(c, 10);
	cout << "Selection sort applied : { ";  print_vector(c, 10);  cout << "}\n";
	
	newline();
	generate_vector_v5(c, 10);
	cout << "Vector c : { ";  print_vector(c, 10);  cout << "}\n";
	generate_vector_v6(c, 10);
	cout << "Vector c : { ";  print_vector(c, 10);  cout << "}\n";
	generate_vector_v7(c, 10);
	cout << "Vector c : { ";  print_vector(c, 10);  cout << "}\n";

	print_string(s, strlen(s));
	make_string_uppercase(s, strlen(s));
	print_string(s, strlen(s));
	make_string_lowercase(s, strlen(s));
	print_string(s, strlen(s));
	cout << "String contains " << count_words(s, strlen(s)) << " words.\n";
	cout << "String contains " << count_words(e, strlen(e)) << " words.\n";
	cout << "String contains " << count_words(f, strlen(f)) << " words.\n";
	cout << "Enter your string : ";
	cin.getline(S, 100);
	cout << "Your string contains " << count_words(S, strlen(S)) << " words.\n";

	newline();
	int A[10][10];
	int B[4][3] = { {1,2},{3,4},{5,6} };
	cout << "Matrix A uses " << sizeof(A) << " bytes.\n";
	cout << "Matrix B uses " << sizeof(B) << " bytes.\n";
	
	generate_matrix(A, 10);
	print_matrix(A, 10);
	newline();

	int mat[3][3] = { {2,2,2},{2,2,2},{2,2,2} };
	int v[3] = { 2,2,2 };
	cout << "Your matrix is : \n"; 
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}
	cout << "Your vector is "; print_vector(v, 3);
	cout << "\nVector appears : " << count_vector_in_matrix(mat, v) << " times in the matrix.\n";

}

