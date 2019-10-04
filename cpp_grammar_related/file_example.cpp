//
//  file_example.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/04.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>
#include <fstream>

int main() { 
    using namespace std;

    const char *filename = "cpp.out";
    char chr_array[100] = "Hello c++ world, from kaku.";

    // Open file and write.
    ofstream outFile;
    outFile.open(filename);
    outFile << chr_array << endl;
    outFile.close();

    // Open file and read.
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Could not open the file:" << filename << endl;
    }

    // inFile >> chr_array;
    // try inFile >> char type variable!
    while (inFile.good()) {
        cout << "Read from " << filename << " content:" << chr_array << endl;
        inFile >> chr_array;
    }
    if (inFile.eof()) {
        cout << "End Of File!\n";
    }
    inFile.close();

    return 0;
}