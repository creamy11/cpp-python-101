#include <stdio.h>
#include <newton.h>

double df(double (*func)(double), double x, double dx)
{
	double dfval = (func(x + dx) - func(x)) / dx;
	return dfval;
}

double newton(double (*func)(double), double x0, int maxIter)
{
	for (int i = 0; i < maxIter; ++i)
	{
		x0 = x0 - f(x0) / df(f, x0, 0.001);
		printf("%d : %4.4f\n", i, x0);
	}
	return x0;
}