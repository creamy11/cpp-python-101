#include <iostream>
#include <dlfcn.h>
#include "yfem.h"

typedef void (*doSome)();

using namespace std;

int main()
{
	const char * err;

	cout << "Hello, world!" << endl;
	void* handle = dlopen("./libyfem.so", RTLD_LAZY);
	err=dlerror();/*check for errors and copy error message*/
	if (err)
		cout << "failed to open libyfem.so" <<  err << endl;;

	doSome greet = (doSome) dlsym(handle, "doSomething");

	err=dlerror();/*check for errors and copy error message*/
	if (err)
		cout << "failed to locate hello_funcion()" <<  err << endl;;
	greet();

	cout << "Bye, world!" << endl;
	return 0;
}