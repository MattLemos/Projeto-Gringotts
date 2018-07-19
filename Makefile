############# Makefile ############

output: main.o block.o
	g++ main.o block.o -o output

main.o: src/main.cpp
	g++ -c src/main.cpp

block.o: src/block.cpp include/block.h
	g++ -c src/block.cpp

clean:
	rm *.o
