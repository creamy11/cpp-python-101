#include <stdio.h>
#include "example.h"

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!");
	Shape obj = new Shape();
	delete obj;
	return 0;
}