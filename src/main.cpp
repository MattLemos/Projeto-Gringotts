#include "../include/block.h"

int main() {
        Block* genesis = new Block();
        genesis->setTransaction("matheus","marcelo","5",0,1);
        genesis->printTransaction();
        return 0;
}
