// g++ main.cpp newton.cpp -o main.x
#include <iostream>
#include <dlfcn.h>
#include <stdio.h>
#include "newton.h"

typedef double (*newton)(double (*)(double), double, int);

using namespace std;

double f(double x)
{
	double fval = (x - 1.0) * (x - 2.0) * (x - 3.0);
	return fval;
}

int main()
{
	const char * err;

	cout << "Hello, world!" << endl;
	void* handle = dlopen("./libnewton.so", RTLD_LAZY);
	err=dlerror();/*check for errors and copy error message*/
	if (err)
		cout << "failed to open libyfem.so" <<  err << endl;;

	newton doNewton = (newton) dlsym(handle, "newton");

	err=dlerror();/*check for errors and copy error message*/
	if (err)
		cout << "failed to locate hello_funcion()" <<  err << endl;;

	cout << "Bye, world!" << endl;

	double x0 = 1.5;
	double root = doNewton(f, x0, 100);
	printf("Root is %6.6f\n", root);
	return 0;
}