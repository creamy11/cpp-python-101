// g++ main.cpp -o main.x

#include <stdio.h>

void f(double x, double y, double* out1, double* out2)
{
	*out1 = (x - 1.0) * (x - 2.0) * (x - 3.0);
	*out2 = 2 * (y - 1.0) * (y - 2.0) * (y - 3.0);
}

int main()
{
	double x0 = 1.5;
	double y0 = 1.5;

	double val1 = 0.0, val2 = 0.0;
	printf("output = (%6.6f, %6.6f)\n", val1, val2);
	f(x0, y0, &val1, &val2);
	printf("output = (%6.6f, %6.6f)\n", val1, val2);
	return 0;
}