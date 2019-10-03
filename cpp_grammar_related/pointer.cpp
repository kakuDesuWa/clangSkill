//
//  pointer.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/03.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>

int main() { 
    using namespace std;
    int updates;
    int *p_updates = &updates;  // initialize pointer value(p_updates), not updates value!
    // int *p_updates;  // use * to dereference p_updates is dangerous, before initialize!
    // *p_updates = 5;
    cout << "updates values = " << updates << endl;
    cout << "updates address = " << &updates << endl;
    cout << "p_updates values = " << p_updates << endl;
    cout << "updates values = " << updates << endl;
    cout << "p_updates values = " << p_updates << endl;
    cout << "*p_updates values = " << *p_updates << endl;
}
