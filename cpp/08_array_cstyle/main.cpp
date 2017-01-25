// g++ main.cpp -o main.x

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int N = 5;
	double* a = (double*) malloc(N * sizeof(double));
	double* b = (double*) malloc(N * sizeof(double));

	// Initialize arrays
	for (int i = 0; i < N; ++i)
	{
		a[i] = i;
		b[i] = 2 * i;
	}
	
	for (int i = 0; i < N; ++i)
		printf("c[%d] = %4.4f\n", i, b[i]);
	b = a;
	for (int i = 0; i < N; ++i)
		printf("c[%d] = %4.4f\n", i, b[i]);

	// Initialize output array
	double* c = (double*) malloc(N * sizeof(double));
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

	free(a);
	free(b);
	free(c);

	return 0;
}