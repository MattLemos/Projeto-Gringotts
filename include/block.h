#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include <iostream>
#include <vector>
#include "sha256.h"
using namespace std;

class Block {
        private:
                // variaveis
                string sender;          // nome do usuario que enviou a quantia
                string receiver;        // nome do usuario que recebeu a quantia
                int value;           // quantia
                string prev_hash;
                string hash;
        public:
                  // métodos
                void setSender(string sender);
                void setReceiver(string receiver);
                void setValue(int value);
                void setHashes(string hash);
                string getHash();
                vector<string> getTransaction();
                void printTransaction();
};

#endif
