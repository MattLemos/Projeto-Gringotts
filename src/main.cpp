#include "../include/chain.h"

int main() {
        Chain* transactions = new Chain("none","none",0);
        transactions->setTransaction("matheus","marcelo",6);
        transactions->setTransaction("matheus","lemos",10);
        transactions->setTransaction("texugo","lemos",10);
        transactions->setTransaction("texugo","texugo",15);
        transactions->printChain();
        return 0;
}
