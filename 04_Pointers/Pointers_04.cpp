// Pointers_04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "functions_04.h"
#include <iostream>

int main()
{
	cout << "[POINTERS BASICS] :\n\n";

	int a = 1, b = 2;
	int &copy_a = a;
	int *p, *q;
	cout << "Free pointer address : " << &p << endl;
	p = &a;			// address is asign to address of var a
	*p = *p + 10;
	q = &b;			// address is asign to address of var b
	++(*q);
	cout << "Address pointer  p = " << &p << "; Address pointer  q = " << &q << endl;
	cout << "Address variable a = " << &a << "; Address variable b = " << &b << endl;
	cout << "Address assinged p = " << p <<  "; Address assigned q = " << q << endl;
	cout << "Address  alias   a = " << &copy_a << endl;
	cout << "Values: a=" << a << "; *p=" << *p << "; b=" << b << "; *q=" << *q << ";\n";

	newline();
	cout << "\n[VOID POINTERS] :\n\n";
	int i = 1;
	double d = 12.34;
	char c = 'a';
	void *p1;		// it can indicate a variable size memory location
	cout << "integer = " << i << "; double = " << d << "; character = " << c << "; void_pointer = " << &p1 << ";\n";
	p1 = &i;
	(*(int *)p1)++;	// cast is required for void pointers!
	p1 = &d;
	(*(double *)p1) = (*(double *)p1) * 3;
	p1 = &c;
	(*(char *)p1) = 'b';
	cout << "Modifications after using void_pointer : integer = " << i << "; double = " << d << "; character = " << c << endl;

	newline();
	cout << "\n[POINTER TO POINTERS] :\n\n";
	int *p2;
	int **q2;
	int ***t2;
	i = 123;
	p2 = &i;
	q2 = &p2;
	t2 = &q2;
	cout << "Var int address = " << &i << "; int val = " << i << ";\n\n";
	cout << "Pointer to int : " << &p2 << " -> " << p2 << endl;
	cout << "Pointer to pointer to int : " << &q2 << " -> " << q2 << endl;
	cout << "Pointer to pointer to pointer to int : " << &t2 << " -> " << t2 << endl;
	cout << "The value for the last pointer = " << ***t2 << ";\n";

	newline();
	cout << "\n[POINTER COMPARISON] :\n\n";
	// All pointers used inside an expresion needs to have the same type ! 
	// Example :
	int *x1, *x2, *x3;
	double *x4;
	void *pv;
	x3 = &i;
	x1 = x2 = x3;
	pv = x1;
	//p4 = p1; -> compilation error : we cannot assign a double pointer to int pointer
	cout << i << " " << *x1 << " " << *x2 << " " << *x3 << " " << (*(int *)pv) << endl;
	cout << "Given pointers : p1 = " << p1 << "; p2 = " << p2 << endl;
	cout << "min(p1,p2) = " << min_addr_pointer((int*)p1, p2) << endl;

	newline();
	cout << "\n[ADDITION AND SUBTRACTION] :\n\n";
	a = 10; b = 20;
	x1 = &a;
	x2 = &b;
	cout << x1 << " " << x2 << endl;
	x1++;
	x2 = x2 + 10;
	cout << x1 << " " << x2 << endl;
	--x1;
	x2 -= 10;
	cout << x1 << " " << x2 << endl;

	newline();
	cout << "\n[POINTERS TO STRUCTURES] :\n\n";
	complex z, *p4;
	z.re = 2;
	z.img = -5;
	p4 = &z;
	cout << "z = " << (*p4).re << char((p4->img < 0) ? ' ' : '+');
	cout << p4->img << "*i\n";

	newline();
	cout << "\n[DYNAMIC ALLOCATION OF MEM] :\n\n";
	int *p3, *q3;
	cout << "Enter 2 numbers then press enter : ";
	if ((p3 = new int) && (q3 = new int))
	{
		cin >> *p3 >> *q3;
		cout << *p3 << " + " << *q3 << " = " << *p3 + *q3;
		delete p3; delete q3;
	}
	else cout << "Error allocation!\n";
}


