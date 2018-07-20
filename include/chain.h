#ifndef CHAIN_H
#define CHAIN_H
#include "block.h"
#include<list>
using namespace std;

class Chain {
        private:
                list<Block> blockchain;
        public:
                Chain(string gen_sender, string gen_receiver, int gen_value);
                void pushTransaction(Block transaction);
                void setTransaction(string sender, string receiver, int value);
                void printChain();
};



#endif
