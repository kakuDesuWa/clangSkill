//
//  template.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/05.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>

using namespace std;

template <typename T>  // Support to Generic Type 泛型
void myswap(T &a, T &b);

int main() {
    int i = 0, j = 1;
    cout << "i = " << i << ", j = " << j << endl;
    myswap(i, j);
    cout << "i = " << i << ", j = " << j << endl;

    char a = 'x', b = 'o';
    cout << "a = " << a << ", b = " << b << endl;
    myswap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
}

template <typename T>
void myswap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}