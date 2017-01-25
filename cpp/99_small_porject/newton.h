#include <stdio.h>

double df(double (*func)(double), double x, double dx);

double newton(double (*func)(double), double x0, int maxIter);