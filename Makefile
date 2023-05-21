main: main.o heap.o 
	g++ -o main main.o heap.o
tests: heap.o tests.o
	g++ -o tests tests.o heap.o
heap.o: heap.cpp heap.h
tests.o: tests.cpp doctest.h heap.h
main.o: main.cpp heap.h

clean:
	rm -f *.o
