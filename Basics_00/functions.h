// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>

using namespace std;

void newline()
{
	cout << "------------------------------------------------------------\n";
}

void print_data_types_size()
{
	cout << "\t~ Memory usage for different data types in C++ ~\t\n";
	cout << "------------------------------------------------------------\n";
	cout << "\tSize of CHAR data type : " << sizeof(char) << " bytes\n";
	cout << "\tSize of INT data type : " << sizeof(int) << " bytes\n";
	cout << "\tSize of FLOAT data type : " << sizeof(float) << " bytes\n";
	cout << "\tSize of DOUBLE data type : " << sizeof(double) << " bytes\n";
	cout << "------------------------------------------------------------\n";
}

void print_christmas_tree()
{
	cout << "\t    *    \n";
	cout << "\t   ***   \n";
	cout << "\t  *****  \n";
	cout << "\t ******* \n";
	cout << "\t    *    \n";
}

void print_smart_christmas_tree(int level)
{
	int leafs[10], ct_leaf = 0, row = 0;
	int root = level;
	for (int i = 0; i < level * 2; i++)
		if (i % 2 != 0)
		{
			leafs[ct_leaf] = i;
			ct_leaf++;
		}
	while (level > 0)
	{
		for (int i = 0; i < level-1; i++)
			cout << " ";
		for (int i = 0; i < leafs[row]; i++)
			cout << "*";
		cout << "\n";
		level--;
		row++;
	}
	for (int i = 0; i < root - 1; i++)
		cout << " ";
	cout << "*\n";

}

void print_distinct_numbers(int a, int b, int c)
{
	if (a != b && a != c) cout << a << " ";
	if (b != a && b != c) cout << b << " ";
	if (c != a && c != b) cout << c << " ";
}

float equation1(float x)
{
	return (pow(x, 2) / (x - 1));
}

float fracional_part_of_number(float x)
{
	return (x - (int)x);
}

float min(float a, float b)
{
	if (a < b) return a;
	else return b;
}

float max(float a, float b)
{
	if (a > b) return a;
	else return b;
}

float middle_value(float a, float b, float c)
{
	int min_value, max_value;
	int sum = a + b + c;
	min(a, b) < c ? min_value = min(a, b) : min_value = c;
	max(a, b) > c ? max_value = max(a, b) : max_value = c;
	return sum - max_value - min_value;
}


