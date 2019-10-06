//
//  Time.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/06.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>

#include "time.h"

using namespace std;

// Default constructor function
Time::Time() {}

// Reload constructor function
Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

// Default destructor function
Time::~Time() {
    cout << "Destory Time object: Hours: " 
         << hours 
         << " Minutes: " 
         << minutes 
         << endl;
}

// Reload + operator
Time Time::operator+(const Time & t) const {

    Time sum;
    sum.hours = hours  + t.hours + (t.minutes + minutes) / 60;
    sum.minutes = (t.minutes + minutes) % 60;

    return sum;
}

// Reload << operator
ostream & operator<<(ostream & os, const Time & t) {
    string s;
    char temp[100];  // You had better have room for what you are sprintf()ing!
    sprintf(temp, "Time< %d:%2d>", t.hours, t.minutes);
    s = temp;
    os << s;
    return os;
}