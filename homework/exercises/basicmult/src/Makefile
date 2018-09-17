# -*- MakeFile -*-

square: main.o
	g++ -o square main.o

main.o: main.cpp
	g++ main.cpp -c -std=c++14
	#g++ main.cpp -c -std=c++0x

clean:
	rm -f *.o square


