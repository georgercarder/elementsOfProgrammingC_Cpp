# -*- MakeFile -*-

findrand: main.o
	g++ -o square main.o

main.o: main.cpp coll_pno.h conn_pno.h osno.h cp.h 
	g++ main.cpp -c -std=c++0x

clean:
	rm -f *.o findrand 


