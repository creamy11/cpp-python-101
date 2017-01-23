// g++ main.cpp newton.cpp -o main.x

#include <stdio.h>
#include <newton.h>

double f(double x)
{
	double fval = (x - 1.0) * (x - 2.0) * (x - 3.0);
	return fval;
}

int main()
{
	double x0 = 1.5;
	double root = newton(f, x0, 100);
	printf("Root is %6.6f\n", root);
	return 0;
}