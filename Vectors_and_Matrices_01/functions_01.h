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

void input_vector(int a[])
{
	int len = 9;
	cout << "Enter the length of vector : ";
	cin >> len;
	for (int i = 0; i < len; i++)
	{
		cout << "vect[" << i << "]=";
		cin >> a[i];
		cout << endl;
	}
	cout << "Vector created : ";
		for (int i = 0; i < len; i++)
			cout << a[i] << " ";
	cout << endl;
}

void print_vector(int a[], int len)
{
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
}

void print_reverse_order_vector(int a[], int len)
{
	for (int i = len - 1; i >= 0; i--)
		cout << a[i] << " ";
}


