// Struct_and_Union_02.cpp : This file contains the 'main' function. 
// This file contains a short tutorial for struct and union data types.

#include "functions_02.h"
#include <iostream>

int main()
{
	cout << "\n[STRUCT data type]\n" << endl;
	person p = { "Gate", "John", 30 ,{10, 2, 1989} };
	p.age++;
	cout << p.first_name << " " << p.last_name << " " << p.age << " " << p.birth.day << "/" << p.birth.mounth << "/" << p.birth.year << "\n";

	newline();
	complex z1 = { 1,2 }, z2 = { 5,-1 }, sum, prod;
	float m;
	sum = sum_complex(z1, z2);
	prod = mul_complex(z1, z2);
	m = abs_complex(z1);
	cout << "Abs(z1) = " << m << endl;
	m = abs_complex(z1);
	cout << "Abs(z2) = " << m << endl;
	cout << "Sum = " << sum.re << " + i*" << sum.img << endl;
	cout << "Product = " << prod.re << " + i*" << prod.img << endl;

	newline();
	cout << "\n[UNION data type]\n" << endl;
	integer I;
	I.i = 0;
	cout << "0000h = " << I.i << endl;
	I.c[3] = 255;
	cout << "F000h = " << I.i << endl;
	I.c[3] = 0; I.c[2] = 255;
	cout << "0F00h = " << I.i << endl;
	I.c[2] = 0; I.c[1] = 255;
	cout << "00F0h = " << I.i << endl;
	I.c[1] = 0; I.c[0] = 255;
	cout << "000Fh = " << I.i << endl;

	newline();
	figure f;
	f.Circle.P.x = 10;
	f.Circle.P.y = 10;
	f.Circle.r = 5;
	cout << "Circle: (" << f.Circle.P.x << "," << f.Circle.P.y << "); radius=" << f.Circle.r << "\n";
	f.Rectangle.A.x = 1;
	f.Rectangle.A.y = 2;
	f.Rectangle.B.x = 15;
	f.Rectangle.B.y = 20;
	cout << "Rectangle: (" << f.Rectangle.A.x << "," << f.Rectangle.A.y << ") (" << f.Rectangle.B.x << "," << f.Rectangle.B.y << ")\n";
	figure rect[4], aux;
	int area = 0;
	cout << "\nHere we have a list of rectangles :\n";
	for (int i = 0; i < 4; i++)
	{
		rect[i].Rectangle.A.x = rand() % 5;
		rect[i].Rectangle.A.y = 1 + rand() % 10;
		rect[i].Rectangle.B.x = rect[i].Rectangle.A.x + (1 + rand() % 5);
		rect[i].Rectangle.B.y = rect[i].Rectangle.A.y - (1 + rand() % 5);
		cout << "Rectangle: (" << rect[i].Rectangle.A.x << "," << rect[i].Rectangle.A.y << ") (" << rect[i].Rectangle.B.x << "," << rect[i].Rectangle.B.y << ") -> Area: " << area_rect(rect[i].Rectangle) << "\n";
		if (area_rect(rect[i].Rectangle) > area)
		{
			area = area_rect(rect[i].Rectangle);
			aux.Rectangle.A.x = rect[i].Rectangle.A.x;
			aux.Rectangle.A.y = rect[i].Rectangle.A.y;
			aux.Rectangle.B.x = rect[i].Rectangle.B.x;
			aux.Rectangle.B.y = rect[i].Rectangle.B.y;
		}
	}
	cout << "\From the list, rectangle : (" << aux.Rectangle.A.x << "," << aux.Rectangle.A.y << ") (" << aux.Rectangle.B.x << "," << aux.Rectangle.B.y << ") has the maximum area of " << area << endl;

	newline();
	date D = { 29,4,97 };
	cout << "Date data type: " << D.day << "/" << D.mounth << "/" << D.year << endl;
	cout << "Enum data type:\n";
	for (int i = Monday; i <= Sunday; i++)
		message(i);
	cout << endl;

	newline();
	student students[50];
	string str_students = read_students_from_file();
	int ct_students = len_of_students_from_file(str_students);
	split_str(str_students, students);
	print_students_vector(students, ct_students);
}

