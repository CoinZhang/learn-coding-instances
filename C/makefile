.all:dd test

dd:dd.o header.o
	g++ -std=c++11 dd.o header.o -o dd

test: test.o header.o
	gcc header.o test.o -lm -o test

test.o: test.c
	gcc -c -g test.c  

dd.o:dd.cpp
	g++ -c -g -std=c++11 dd.cpp -o dd.o

header.o: header.c
	gcc -c -g header.c -o header.o

fork: forktest.o
	gcc forktest.o -o fork

forktest.o: forktest.c
	gcc -c -g forktest.c -o forktest.o

clean:
	rm -rif *.o dd
