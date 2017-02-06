all:
	swig -c++ -python example.i
	g++ -O2 -fPIC -c example.cxx -o example.o
	g++ -O2 -fPIC -c example_wrap.cxx -o example_wrap.o -I/usr/include/python2.7/
	g++ -shared example.o example_wrap.o -o _example.so