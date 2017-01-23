#include <stdio.h>

int main(int argc, char const *argv[])
{
	double sum = 0.0;
	for (int i = 0; i < 10; ++i)
	{
		if( i % 2 == 0)
			sum += i; // sum = sum + i;

		printf("iteration : %03d, sum = %f\n", i, sum);
	}
	printf("%f\n", sum);

	return 0;
}