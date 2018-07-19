#ifndef CHAIN_H
#define CHAIN_H
#include "block.h"
#include<list>
using namespace std;

class Chain {
        private:
                list<Block> blockchain;
        public:
                void insertTransaction(Block transaction);
                void printChain();
};

#endif
