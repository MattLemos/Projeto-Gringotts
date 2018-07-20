#include "../include/chain.h"
using namespace std;

Chain::Chain(string gen_sender, string gen_receiver, int gen_value) {
        Block genesis;
        genesis.setSender(gen_sender);
        genesis.setReceiver(gen_receiver);
        genesis.setValue(gen_value);
        genesis.setHashes(0);
        this->pushTransaction(genesis);
}

void Chain::setTransaction(string sender, string receiver, int value) {
        Block transaction;
        int last_hash;
        transaction.setSender(sender);
        transaction.setReceiver(receiver);
        transaction.setValue(value);
        last_hash = this->blockchain.back().getHash();
        transaction.setHashes(last_hash);
        this->pushTransaction(transaction);
}

void Chain::pushTransaction(Block transaction) {
        this->blockchain.push_back(transaction);
}



void Chain::printChain() {
        for(list<Block>::iterator it = this->blockchain.begin(); it != this->blockchain.end(); it++){
                it->printTransaction();
        }
}
