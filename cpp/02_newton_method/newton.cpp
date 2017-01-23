#include <stdio.h>

double f(double x)
{
	double fval = (x - 1.0) * (x - 2.0) * (x - 3.0);
	return fval;
}

double df(double x)
{
	double dfval = 3.0 * x0 * x0 - 12.0 * x0 + 11.0;
	return dfval;
}

int main()
{
	double x0 = 1.5;
	for (int i = 0; i < 100; ++i)
	{
		x0 = x0 - f(x0) / df(x0);
		printf("%d : %4.4f\n", i, x0);
	}
	return 0;
}