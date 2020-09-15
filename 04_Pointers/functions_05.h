// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <string>

using namespace std;

void newline()
{
	cout << "------------------------------------------------------------\n";
}

void init_vector(int a[], int len)
{
	int *p;
	for (p = a; p - a < len; p++)
		*p = rand() % 10;
}

void print_vector(int a[], int len)
{
	int *p, *sf;
	sf = a + len;
	for (p = a; p < sf; p++)
		cout << *p << " ";
	cout << endl;
}

void init_vector_with_01(int a[], int len)
{
	for (int i = 0; i < len; i++)
		a[i] = rand() % 2;
}

void sort_vector_01(int a[], int &len)
{
	int *left, *right;
	left = a;
	right = a + len - 1;
	while (left < right)
	{
		while ((left < right) && (*left == 0)) left++;
		while ((left < right) && (*right == 1)) right--;
		if (left < right)
		{
			*left = 0;
			*right = 1;
		}
	}
}

void init_mat(int a[10][10], int &len)
{
	len = 4;
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			a[i][j] = rand() % 10;
}

void print_mat(int a[10][10], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << endl;
		for (int j = 0; j < len; j++)
			cout << a[i][j] << " ";
	}
	cout << endl;
}

void sort_mat(int a[], int len)
{
	int aux;
	for (int i = 0; i < len - 1; i++)
		for (int j = i + 1; j < len; j++)
			if (a[i] > a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
}

void print_week(char days[7][10])
{
	for (int i = 0; i < 7; i++)
		cout << days[i] << " ";
	cout << endl;
}

void swap_day(char *s1, char *s2)
{
	char t[10];
	strcpy(t, s1);
	strcpy(s1, s2);
	strcpy(s2, t);
}

void sort_lexicographic(char days[7][10])
{
	char t[10];
	for (int i = 0; i < 6; i++)
		for (int j = i + 1; j < 7; j++)
			if (strcmp(days[i], days[j]) > 0)
				swap_day(days[i], days[j]);
}

void swap_int(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

void swap_ptr_int(int *&x, int *&y)
{
	int *t;
	t = x;
	x = y;
	y = t;
}

void swap_ptr_int_var2(int **a, int **b)
{
	int *t;
	t = *a;
	*a = *b;
	*b = t;
}