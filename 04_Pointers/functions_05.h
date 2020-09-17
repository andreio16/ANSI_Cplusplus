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

void copy_v(int a[], int &n, int b[], int m)
{
	n = m;
	for (int i = 0; i < n; i++)
		a[i] = b[i];
}

void swap_vectors(int a[], int &n, int b[], int *m)
{
	int t[100], l;
	copy_v(t, l, a, n);
	copy_v(a, n, b, *m);
	copy_v(b, *m, t, l);
}

void swap_vectors_var2(int *&a, int &n, int *&b, int &m)
{
	int *T, t;
	t = n; n = m; m = t;
	T = a; a = b; b = T;
}

int * create_input_vect(int &n)
{
	int *t;
	cin >> n;
	if (!(t = new int[n]))
	{
		cout << "Error allocation!\n";
		exit(1);
	}
	for (int i = 0; i < n; i++)
		cin >> t[i];
	return t;
}

void delete_input_vect(int *a)
{
	if (a) delete []a;
 }

int * save_line_from_mat_with_1zero(int a[4][4], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == 0) return a[i];
}

int double_nr(int nr) { return nr * 2; }

int triple_nr(int nr) { return nr * 3; }

void create_random_vect(int *a, int(*p)(int), int len)
{
	int nr;
	for (int i = 0; i < len; i++)
	{
		nr = rand() % 10;
		a[i] = nr * p(9);
		cout << "a[" << i << "] = " << nr << " x " << p(9) << " = " << a[i] << endl;
	}
		
}

typedef double(*type_ptr_func) (double);

int calculate(char *op, ...)
{
	int e;
	char **t, *s;
	int *p;
	t = &op;
	t++;
	p = (int*)t;
	e = *p; p++;
	for (s = op; *s; s++, p++)
		if (*s == '+') e += *p;
		else e -= *p;
	return e;
}

int sum(int nr, ...)
{
	int s = 0, *p;
	p = &nr;
	for (int i = 1; i <= nr; i++)
		s += p[i];
	return s;
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

int cmmdc_n(int nr, ...)
{
	int *p = &nr;
	p++;
	int first = *p;
	p++;
	for (int i = 1; i <= nr; i++)
		first = cmmdc(first, p[i]);
	
	return first;
}

int funct_x2(int n) { return 2 * n; }

int special(int (*f)(int), int *vect, int len)
{
	int min = INT_MAX;
	for (int i = 0; i < len; i++)
		if (f(vect[i]) < min) min = f(vect[i]);
	return min;
}