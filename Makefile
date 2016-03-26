CPPFLAGS=-Wall -g

all: 
	g++ compare_if.cpp -Wall -g -o compare_if
	g++ helloworld.cpp -Wall -g -o helloworld

clean:
	rm -f compare_if
	rm -f helloworld

