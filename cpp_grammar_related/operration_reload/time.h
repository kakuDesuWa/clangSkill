//
//  timer.h
//  clangSkill
//
//  Created by kaku on 2019/10/06.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Time {

private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    ~Time();
    Time operator+(const Time & t) const;
    friend ostream & operator<<(ostream & os, const Time & t);
};