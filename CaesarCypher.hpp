//  CaesarCypher.hpp
//  Cypher
//  Created by Ethan Quinn on 11/24/22.

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

#ifndef CaesarCypher_hpp
#define CaesarCypher_hpp

class CaesarCypher {
    private:
        int key;
        string line;
    public:
        void Encrypt(ifstream& inFS, ofstream& outFS);
};

#endif
