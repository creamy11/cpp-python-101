#include <stdio.h>

int main()
{
	double x0 = 1.5;
	for (int i = 0; i < 100; ++i)
	{
		double fval = (x0 - 1.0) * (x0 - 2.0) * (x0 - 3.0);
		double dfval = 3.0 * x0 * x0 - 12.0 * x0 + 11.0;
		x0 = x0 - fval / dfval;
		printf("%d : %4.4f\n", i, x0);
	}
	return 0;
}