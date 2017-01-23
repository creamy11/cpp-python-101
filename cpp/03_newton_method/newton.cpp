#include <stdio.h>

double f(double x)
{
	double fval = (x - 1.0) * (x - 2.0) * (x - 3.0);
	return fval;
}

double df(double (*func)(double), double x, double dx)
{
	double dfval = (func(x + dx) - func(x)) / dx;
	return dfval;
}

int main()
{
	double x0 = 1.5;
	for (int i = 0; i < 100; ++i)
	{
		x0 = x0 - f(x0) / df(f, x0, 0.001);
		printf("%d : %4.4f\n", i, x0);
	}
	return 0;
}