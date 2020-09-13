// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Struct data type have a public visibility by default.
// Total memory usage for struc = the sum of all members
struct birthday
{
	int day, mounth, year;
};

struct person {
	char first_name[20];
	char last_name[20];
	int age;
	birthday birth;
};


struct complex {
	float re;
	float img;
};

void newline()
{
	cout << "------------------------------------------------------------\n";
}

complex sum_complex(complex x, complex y)
{
	complex T;
	T.re = x.re + y.re;
	T.img = x.img + y.img;
	return T;
}

complex mul_complex(complex x, complex y)
{
	complex T;
	T.re = x.re * y.re - x.img * y.img;
	T.img = x.re * y.img + x.img * y.re;
	return T;
}

float abs_complex(complex x)
{
	return sqrt(x.re*x.re + x.img*x.img);
}

// Total memory usage for union = only the size of the bigest member
union integer
{
	unsigned int i;
	char c[4];
};

struct point {
	int x, y;
};

struct circle {
	point P;
	int r;
};

struct triangle {
	point A, B, C;
};

struct rectangle {
	point A, B;
};

int area_rect(rectangle rect)
{
	int width = rect.A.y - rect.B.y;
	int length = rect.B.x - rect.A.x;
	return (width*length);
}

union figure {
	circle Circle;
	triangle Triangle;
	rectangle Rectangle;
};

struct date {
	//data is stored using bit fields
	unsigned day : 5;			// for storing days we need 5 bits (2^5 = 32 values for codification)
	unsigned mounth : 4;		// 12 mounths = 1 year ( 2^4 = 16 values for codification)
	unsigned year : 7;			// 2 digits format for year so : 2^7 = 128 values for codification 
};

enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
// enum members are integers - see main function
void message(int i)
{
	if ((i >= Monday) && (i <= Friday))
		cout << "Work! ";
	else
		cout << "Free Time! ";
 }

struct student
{
	string first_name;
	string last_name;
	birthday birth;
	float average_grades;
};

void print_students_vector(student*s, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << s[i].first_name << " " << s[i].last_name << " " << s[i].birth.day << "/" << s[i].birth.mounth << "/" << s[i].birth.year << " average grades: " << s[i].average_grades << endl;
	}
}

string read_students_from_file()
{
	ifstream fin("students.txt");
	string str, data;
	while (!fin.eof())
	{
		fin >> str;
		data += str;
	}
	return data;
}

int len_of_students_from_file(string data)
{
	string delimiter = "*";
	size_t pos;
	int i = 0;
	while ((pos = data.find(delimiter)) != string::npos)
	{
		i++;
		data.erase(0, pos + delimiter.length());
	}
	return i;
}

void split_str(string data, student *out)
{
	string row, word;
	string delimiter1 = "*";
	string delimiter2 = "|";
	size_t pos1, pos2;
	int row_ct = 0, word_ct;
	while ((pos1 = data.find(delimiter1)) != string::npos)
	{
		word_ct = 0;
		row = data.substr(0, pos1);
		while ((pos2 = row.find(delimiter2)) != string::npos)
		{
			word = row.substr(0, pos2);
			if (word_ct == 0) out[row_ct].first_name = word;
			if (word_ct == 1) out[row_ct].last_name = word;
			if (word_ct == 2) out[row_ct].birth.day = stoi(word);
			if (word_ct == 3) out[row_ct].birth.mounth = stoi(word);
			if (word_ct == 4) out[row_ct].birth.year = stoi(word);
			word_ct++;
			row.erase(0, pos2 + delimiter2.length());
		}
		row_ct++; 
		if (row != "") out[row_ct - 1].average_grades = stof(row);
		data.erase(0, pos1 + delimiter1.length());
	}
}


/*
// How data is structured in the .txt file //

	Dany  |Barny |10|2 |1990 |8.5  *
	Emma  |Whato |12|4 |1995 |9.12 *
	John  |Pony  |1 |3 |1996 |6.5  *
	Clara |Darra |13|7 |1997 |7.3  *
	Stefan|Tymo  |7 |9 |2000 |8.2  *
	Katy  |Era   |5 |4 |1998 |9.8  *
	Alex  |Koma  |8 |11|2001 |5.8  *
	Eva   |Yone  |9 |12|2003 |9.9  *
	Andy  |Nini  |3 |4 |2005 |7.8  *

*/
