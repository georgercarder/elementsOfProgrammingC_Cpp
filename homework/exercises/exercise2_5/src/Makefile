# -*- MakeFile -*-

findrand: main.o
	g++ -o findrand main.o

main.o: main.cpp coll_pno.h conn_pno.h conn_pt.h osno.h cp.h distance.h main.h
	g++ main.cpp -c -std=c++0x

clean:
	rm -f *.o findrand 


