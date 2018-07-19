#include "../include/chain.h"

int main() {
        Chain* transactions = new Chain();
        Block genesis;
        Block second;
        Block third;
        genesis.setTransaction("matheus","marcelo","5",0,1);
        second.setTransaction("marcelo","matheus","10",1,2);
        third.setTransaction("sandy","junior","15",2,3);
        transactions->insertTransaction(genesis);
        transactions->insertTransaction(second);
        transactions->insertTransaction(third);
        transactions->printChain();
        return 0;
}
