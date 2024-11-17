#NRMN: DO NOT EDIT THIS FILE. NOT YOUR CONCERN. 
main.o: main.cpp main.hpp
	g++ -c main.cpp
	
test1.o: test1.cpp
	g++ -c test1.cpp

test2.o: test2.cpp
	g++ -c test2.cpp

test3.o: test3.cpp
	g++ -c test3.cpp

test4.o: test4.cpp
	g++ -c test4.cpp
	
test1: main.o test1.o
	g++ main.o test1.o -o output
	./output
	
test2: main.o test2.o
	g++ main.o test2.o -o output
	./output

test3: main.o test3.o
	g++ main.o test3.o -o output
	./output

test4: main.o test4.o
	g++ main.o test4.o -o output
	./output
	
clean:
	rm *.o output
