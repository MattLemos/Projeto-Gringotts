#include "../include/chain.h"

void Chain::insertTransaction(Block transaction) {
        this->blockchain.push_front(transaction);
}

void Chain::printChain() {
        for(list<Block>::iterator it = this->blockchain.begin(); it != this->blockchain.end(); it++){
                it->printTransaction();
        }
}
