// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
#include <vector>
#include <string.h>

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

void print_string(char s[], int len)
{
	for (int i = 0; i < len; i++)
		cout << s[i] << " ";
	cout << endl;
}

void print_reverse_order_vector(int a[], int len)
{
	for (int i = len - 1; i >= 0; i--)
		cout << a[i] << " ";

}

void generate_vector_v1(int a[], int len)
{
	for (int i = 0; i < len; i++)
		a[i] = len - 1 - i;
}

void generate_vector_v2(int a[], int len)
{
	for (int i = 0; i < len; i++)
		a[i] = (i % 2 == 0) ? 0 : i;
}

void generate_vector_v3(int a[], int len)
{
	// Fibonacci Series
	a[0] = a[1] = 1;
	for (int i = 2; i < len; i++)
		a[i] = a[i - 1] + a[i - 2];
}

void generate_vector_v4(int a[], int len)
{
	for (int i = 0; i < len; i++)
		a[i] = -10 + rand() % (10 + 10 + 1);
}

void generate_vector_v5(int a[], int len)
{
	for (int i = 0; i < len; i++)
		a[i] = rand() % rand();
}

void generate_vector_v6(int *a, int n)
{
	for (int i = 0; i < n; i++)
		if (i % 2 == 0) a[i] = 0;
		else a[i] = i / 2 + 1;
}

int calculate_sum(int a[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
		sum += a[i];
	return sum;
}

int calculate_mul_of_even_elements(int a[], int len)
{
	int mul = 1;
	for (int i = 0; i < len; i++)
		if (a[i] % 2 == 0) mul *= a[i];
	return mul;
}	

int max_value_from_vector(int a[], int len)
{
	int max = (int)-INTMAX_MAX;
	for (int i = 0; i < len; i++)
		if (a[i] > max) max = a[i];
	return max;
}

void check_asc_fibo_sim(int a[], int len)
{
	bool asc = true, fibo, sim;
	for (int i = 0; i < len - 1; i++)
		if (a[i] > a[i + 1])  asc = false;

	if (a[0] == a[1] == 1) fibo = true;
	for (int i = 2; i < len; i++)
		if (a[i] != a[i - 1] + a[i - 2])fibo = false;
	
	for (int i = 0, j = len - 1; i < len; i++, j--)
		if (a[i] != a[j]) sim = false;
	
	cout << "Given vector : is ";
	if (!asc) cout << "not ";
	cout << "ascending, ";
	if (!fibo) cout << "not ";
	cout << "Fibonacci, ";
	if (!sim) cout << "not ";
	cout << "symmetric. \n";

	

}

void bubble_sort(int a[], int len)
{
	int aux;
	for (int k = 0; k < len; k++)
		for (int i = 0; i < len-1; i++)
			if (a[i] > a[i + 1]) 
			
{
				aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
			}
}

void selection_sort(int *a, int len)
{
	for (int i = 0; i < len - 1; i++)
		for (int j = i + 1; j < len; j++)
			if (a[j] < a[i]) swap(a[j], a[i]);
}

void generate_matrix(int a[][10], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i == j) || (i + j == 10 - 1))
				a[i][j] = 1;
			else a[i][j] = 0;
		}
	}		
}

void print_matrix(int a[][10], int n)
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void generate_vector_v7(int *a, int n)
{
	int pos = 0, neg = n - 1, aux;

	for (int i = 0; i < n; i++)
	{
		aux = -100 + rand() % (100 + 100 + 1);
		if (aux > 0)
			a[pos++] = aux;
		else
			a[neg--] = aux;		
	}
}

int count_vector_in_matrix(int a[3][3], int *b)
{
	int ct = 0;
	bool check_line;
	bool check_col;
	for (int i = 0; i < 3; i++)
	{
		check_line = true;
		check_col = true;
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] != b[j]) check_line = false;
			if (a[j][i] != b[j]) check_col = false;
		}
		if (check_line == true) ct++;
		if (check_col == true) ct++;
	}
	return ct;
}

void make_string_uppercase(char *s, int len)
{
	for (int i = 0; s[i]; i++)
		if (s[i] >= 'a' && s[i] < 'z')
			s[i] = s[i] - 'a' + 'A';
}

void make_string_lowercase(char *s, int len)
{
	for (int i = 0; s[i]; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
}

int count_words(char *s, int len)
{
	int ct = 1;
	for (int i = 0; s[i]; i++)
		if (s[i] == ' ') ct++;
	return ct;
}