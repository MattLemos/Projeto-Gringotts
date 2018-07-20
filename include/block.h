#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Block {
        private:
                // variaveis
                string sender;          // nome do usuario que enviou a quantia
                string receiver;        // nome do usuario que recebeu a quantia
                int value;           // quantia
                int prev_hash;
                int hash;

                // métodos
                void setSender(string sender);
                void setReceiver(string receiver);
                void setValue(int value);
                void setHashes(int sum);
                int getHash();
                vector<string> getTransaction();
                void printTransaction();

};

#endif
