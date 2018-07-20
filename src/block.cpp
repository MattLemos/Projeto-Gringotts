#include "../include/block.h"
using namespace std;


void Block::setSender(string sender) {
        this->sender = sender;
}

void Block::setReceiver(string receiver) {
        this->receiver = receiver;
}

void Block::setValue(int value) {
        this->value = value;
}


void Block::setHashes(string prev_hash) {
        this->prev_hash = prev_hash;
        char* temp = (char*)this->prev_hash.c_str();
        this->hash = sha256(temp);
}

string Block::getHash() {
        return this->hash;
}




vector<string> Block::getTransaction(){
        vector<string> values;
        values.push_back(this->sender);
        values.push_back(this->receiver);
        values.push_back(to_string(this->value));
        return values;
}

void Block::printTransaction() {
        cout << "{" << this->sender << "," << this->receiver << "," << this->value << "," << this->prev_hash << "," << this->hash << "}" << endl;
}
