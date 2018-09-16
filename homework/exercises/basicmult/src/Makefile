# -*- MakeFile -*-

square: main.o
	g++ -o square main.o

main.o: main.cpp square.h
	g++ main.cpp -c -std=c++0x

clean:
	rm -f *o square


