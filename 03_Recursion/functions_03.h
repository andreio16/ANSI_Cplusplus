// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
using namespace std;

int f(int, int);
int g(int, int);

void newline()
{
	cout << "------------------------------------------------------------\n";
}

//Direct Recursion
long factorial(int n)
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}

long two_to_pow_n(int n)
{
	if (n == 0) return 1;
	else return 2 * two_to_pow_n(n - 1);
}

long fibonacci(int n)
{
	if (n <= 2) return 1;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}

void reverse_input_chars()
{
	char c;
	c = getchar();
	if (c != '\n') reverse_input_chars();
	cout << c;
}

// Indirect Recursion
int f(int a, int b)
{
	if (a >= b) return a;
	else return g(a, b - 1);
}

int g(int a, int b)
{
	if ((a + b) >= 5) return a + b - 5;
	else return 2 * f(0, b);
}

//Other exercises
void print_vect(int *a, int n)
{
	if (n < 0) return;
	else print_vect(a, n - 1);
	cout << a[n] << " ";
}

void print_digits(int n)
{
	if (n / 10 >= 1) print_digits(n / 10);
	cout << n % 10;
}

void prime_factors(int n, int div)
{
	if (n / div < 1) return;
	else if (n % div == 0)
	{
		prime_factors(n / div, div);
		cout << div << " ";
	}
	else if(n % div != 0)
	{
		prime_factors(n, (div+1));
	}
}

