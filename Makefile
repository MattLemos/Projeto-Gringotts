############# Makefile ############

output: main.o block.o chain.o
	g++ main.o block.o chain.o -o output

main.o: src/main.cpp
	g++ -c src/main.cpp

chain.o: src/chain.cpp include/chain.h
	g++ -c src/chain.cpp

block.o: src/block.cpp include/block.h
	g++ -c src/block.cpp
clean:
	rm *.o
