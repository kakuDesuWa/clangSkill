//
//  function_reload.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/05.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>

using namespace std;

void print(int);
void print(char);

int main() {
    int i = 1;
    char c = 'a';

    print(i);
    print(c);
}

void print(int i) {
    cout << "Hi, I am int variable: " << i << endl;
}

void print(char c) {
    cout << "Hi, I am char variable: " << c << endl;
}