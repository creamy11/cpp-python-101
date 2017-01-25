// g++ main.cpp -o main.x

#include <stdio.h>

int main()
{
	int N = 5;
	double* a = new double[N];
	double* b = new double[N];

	// Initialize arrays
	for (int i = 0; i < N; ++i)
	{
		a[i] = i;
		b[i] = 2 * i;
	}

	// Initialize output array
	double* c = new double[N];
	for (int i = 0; i < N; ++i)
		c[i] = 0.0;

	for (int i = 0; i < N; ++i)
		printf("c[%d] = %4.4f\n", i, c[i]);

	printf("\n\n");
	
	// add
	for (int i = 0; i < N; ++i)
		c[i] = a[i] + b[i];

	for (int i = 0; i < N; ++i)
		printf("c[%d] = %4.4f\n", i, c[i]);

	delete[] a;
	delete[] b;
	delete[] c;

	return 0;
}