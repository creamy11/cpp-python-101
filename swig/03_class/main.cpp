#include <stdio.h>
#include "example.h"

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!");
	Shape circle = new Circle(2.0);
	printf("%f\n", circle.area());
	delete circle;
	return 0;
}