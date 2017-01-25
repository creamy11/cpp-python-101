all : 
	g++ -c -fpic newton.cpp -o newton.o
	g++ -shared -fpic newton.o -o libnewton.so
	g++ main.cpp -ldl -o main.x