all:
	g++ -c -fpic yfem.cpp -o yfem.o
	g++ -shared -fpic yfem.o -o libyfem.so
	g++ main.cpp -ldl -o main.x
	./main.x