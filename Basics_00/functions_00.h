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
	float min_value, max_value;
	float sum = a + b + c;
	min(a, b) < c ? min_value = min(a, b) : min_value = c;
	max(a, b) > c ? max_value = max(a, b) : max_value = c;
	return sum - max_value - min_value;
}

struct quadratic_eq {
	float x1;
	float x2;
	float delta;
};

void calculate_roots(quadratic_eq *eq, float a, float b, float c)
{
	eq->delta = pow(b, 2) - 4 * a*c;
	eq->x1 = (-b - sqrt(eq->delta)) / 2 * a;
	eq->x2 = (-b + sqrt(eq->delta)) / 2 * a;
}

void print_101010_v1(int n)
{
	for (int i = 0; i < n; i++)
		if (i % 2 == 0) cout << "1 ";
		else cout << "0 ";
	cout << endl;
}

void print_101010_v2(int n)
{
	bool b = 1;
	for (int i = 0; i < n; i++) 
	{
		cout << b << " ";
		b = !b;
	}
	cout << endl;
}

void print_101010_v3(int n)
{
	for (int i = 1; i <= n; i++)
		cout << i % 2 << " ";
	cout << endl;
}

void print_1248(int n)
{
	for (int i = 1; i <= n; i *= 2)
		cout << i << " ";
	cout << endl;
}

void print_ASCII_codes()
{
	cout << endl;
	for (int i = 0; i < 255; i++)
	{
		cout << (char)i << "-" << i << "\t";
		if (i % 10 == 9)cout << endl;
	}
	cout << endl;
}

void print_revert_digits_number(int n)
{
	for (int t = n; t; t = t / 10)
		cout << t % 10 << endl;
}

void print_divisors(int number)
{
	for (int d = 1; d <= number; d++)
		if (number%d == 0) cout << d << " ";
	cout << endl;
}

void check_prime_number(int n)
{
	bool prime = true;
	for (int d = 2; d <= n / 2; d++)
		if (n % d == 0) prime = false;
	if (prime == false) cout << n << " is not a prime number!\n";
	int div = 2;
	// Print div factors
	while (n != 1)
	{
		if (n % div == 0)
		{
			cout << div << " ";
			n = n / div;
		}
		else div++;
	}
	cout << endl;
}

int cmmdc(int a, int b)
{
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a;
}

int cmmmc(int a, int b)
{
	return (a*b) / cmmdc(a, b);
}

int factorial(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
		fact *= i;
	return fact;
}

int sum_of_digits(int number)
{
	int digit = number % 10;
	int sum = 0;
	while (number > 0)
	{
		sum += digit;
		number /= 10;
		digit = number % 10;
	}
	return sum;
}

int mul_of_even_digits(int number)
{
	int mul = 1;
	for (int i = number; i; i = i / 10)
		if (i % 2 == 0) mul *= i % 10;
	return mul;
}

int first_digit_number(int number)
{
	int digit = number % 10;
	while (number > 10)
	{
		number /= 10;
		digit = number % 10;
	}
	return digit;
}

int first_digit_counter(int number)
{
	int ct = 0;
	for (int i = number; i; i = i / 10)
		if (i % 10 == first_digit_number(number)) ct++;
	return ct;
}

int max_digit_from_number(int number)
{
	int max = -1;
	for (int i = number; i; i = i / 10)
		if (i % 10 > max) max = i % 10;
	return max;
}

int min_digit_from_number(int number)
{
	int min = 9;
	for (int i = number; i; i = i / 10)
		if (i % 10 < min) min = i % 10;
	return min;
}

int count_min_digit_from_number(int number)
{
	int ct = 0;
	for (int i = number; i; i = i / 10)
		if (i % 10 == min_digit_from_number(number)) ct++;
	return ct;
}

void check_for_same_digits(int number1, int number2)
{
	bool check;
	for (int i = number1; i; i = i / 10)
	{
		check = false;
		for (int t = number2; t; t = t / 10)
		{
			if (i % 10 == t % 10) check = true;

		}
		if (check == false)
		{
			cout << number1 << " doesn't have the same digits as " << number2 << endl;
			break;
		}
	}
	cout << number1 << " has the same digits as " << number2 << endl;
}