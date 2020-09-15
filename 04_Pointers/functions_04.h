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

int* min_addr_pointer(int *p1, int*p2)
{
	if (p1 < p2) return p1;
	else return p2;
}

struct complex {
	float re, img;
};

