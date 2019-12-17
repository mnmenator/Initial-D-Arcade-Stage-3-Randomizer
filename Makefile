id: initial_d.o
	g++ -Wall -pedantic -g -o id initial_d.o

initial_d.o: initial_d.cpp 
	g++ -Wall -pedantic -g -std=c++11 -c initial_d.cpp

clean:
	rm -rf initial_d.o id
