//  CaesarCypher.cpp
//  Cypher
//  Created by Ethan Quinn on 11/24/22.

#include "CaesarCypher.hpp"

void CaesarCypher::Encrypt(ifstream& inFS, ofstream& outFS)
{
    cout << "Enter key:" << endl << ">. ";
    cin >> key;
    while(getline(inFS, line))
    {
        for(int i = 0; i < line.size(); i++)
        {
            if (isalpha(line.at(i)))
            {
                if (toupper(line.at(i)) + key > 'Z')
                    line.at(i) += key - 26;
                else if (toupper(line.at(i)) + key < 'A')
                    line.at(i) += key + 26;
                else
                    line.at(i) += key;
            }
        }
        outFS << line << endl;
    }
}

