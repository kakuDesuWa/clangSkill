//
//  filename.cpp
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>

using namespace std;

void swap1(int *, int *);
void swap2(int &, int &);
void show(int, int); 
void show_array(int (&arr)[5]);

int main() {
    int i = 10;
    int *p = &i;
    int & r = *p;
    cout << r << endl;

    int j = 11;
    p = &j;  // reference still represent i!
    cout << "Change ponter points to j!\n";
    cout << r << endl;
    show(i, j);

    swap1(&i, &j);
    show(i, j);
    swap2(i, j);
    show(i, j);

    int arr[5] = {1, 2, 3, 4, 5};
    show_array(arr);
}

void swap1(int * p, int * q) {
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

void swap2(int & a, int & b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void show(int i, int j) {
    cout << "i: "
         << i
         << "\t"
         << "j: "
         << j
         << endl;
}

void show_array(int (&arr)[5]) {
    cout << "Reference to Array!\n";
}
