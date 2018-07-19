#ifndef BLOCK_H
#define BLOCK_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Block {
        private:
                string sender;          // nome do usuario que enviou a quantia
                string receiver;        // nome do usuario que recebeu a quantia
                string value;           // quantia
                int prev_hash;


        public:
                int hash;
                void setTransaction(string sender, string receiver, string value, int prev_hash, int hash);
                vector<string> getTransaction();
                void printTransaction();

};

#endif
