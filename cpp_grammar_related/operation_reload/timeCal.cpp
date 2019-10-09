//
//  timeCal.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/06.
//  Copyright © 2019 kaku. All rights reserved.
//


#include <iostream>
#include "time.h"

using namespace std;

int main() {
    Time t1(8, 30);
    cout << t1 << "\t";
    Time t2(2, 31);
    cout << t2 << endl;
    cout << "After add:\t";
    cout << (t1 + t2) << endl;
}