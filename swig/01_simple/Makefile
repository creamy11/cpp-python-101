all:
	swig -python example.i
	gcc -O2 -fPIC -c example.c
	gcc -O2 -fPIC -c example_wrap.c -I/usr/include/python2.7
	gcc -shared example.o example_wrap.o -o _example.so