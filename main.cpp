//  main.cpp
//  Cypher
//  Created by Ethan Quinn on 11/24/22.

#include "CaesarCypher.hpp"

int main()
{
    ifstream inFS;
    string prefix;
    string file;
    //string path = "/Users/ethanquinn/Desktop/Cypher/Cypher/Files/";
    string path;
    CaesarCypher cypher;
    
    //cout <<  "Enter file path:" << endl << ">. ";
   // cin >> path;
    cout <<  "Enter file name:" << endl << ">. ";
    cin >> file;
    //inFS.open(path + file + ".txt");
    inFS.open(file + ".txt");
    if (inFS.fail())
    {
        cout << endl << "Error opening input file." << endl;
        return 1;
    }
    
    cout << "Enter file prefix." << endl << ">. ";
    cin >> prefix;
    ofstream outFS(path + prefix + file + ".txt");
    if (outFS.fail())
    {
        cout << endl << "Error opening output file." << endl;
        return 1;
    }
    
    cypher.Encrypt(inFS, outFS);
    inFS.close();
    outFS.close();
    return 0;
}
