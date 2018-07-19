#include "../include/block.h"
using namespace std;

void Block::setTransaction(string sender, string receiver, string value, int prev_hash, int hash) {
        this->sender = sender;
        this->receiver = receiver;
        this->value = value;
        this->prev_hash = prev_hash;
        this->hash = hash;
}

vector<string> Block::getTransaction(){
        vector<string> values;
        values.push_back(this->sender);
        values.push_back(this->receiver);
        values.push_back(this->value);
        return values;
}

void Block::printTransaction() {
        cout << "{" << this->sender << "," << this->receiver << "," << this->value << "," << this->prev_hash << "," << this->hash << "}" << endl;
}
