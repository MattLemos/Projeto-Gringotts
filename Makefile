############# Makefile ############

TARGETS = MAIN

all:	$(TARGETS)


MAIN: main.o block.o chain.o sha256.o
	g++ main.o block.o chain.o sha256.o -o output

main.o: src/main.cpp
	g++ -c src/main.cpp

chain.o: src/chain.cpp include/chain.h
	g++ -c src/chain.cpp

block.o: src/block.cpp include/block.h
	g++ -c src/block.cpp

sha256.o :src/sha256.cpp
	g++ -c src/sha256.cpp

clean:
	rm *.o
