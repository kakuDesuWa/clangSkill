//
//  stock.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/05.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>
// #include <string>
#include "stock.h"

// Constructor function
Stock::Stock(const std::string & co, int n, double pr) {
    company = co;
    shares = n;
    share_val = pr;
    total_val = n * pr;
}

// Deconstructor function
Stock::~Stock() {
    std::cout << "Bey ~ " << company << std::endl;
}

// Init or re-set Stock object attributes
void Stock::acquire(const std::string & co, int n, double pr) {
    company = co;
    shares = n;
    share_val = pr;
    total_val = n * pr;
}

// Display Stock object
void Stock::show() const {
    std::cout << "Hi, You position detail:\n"
         << "\tcompany:\t"
         << company
         << std::endl
         << "\tshares:\t\t"
         << shares
         << std::endl
         <<"\tshare_val\t"
         << share_val
         << std::endl
         << "\ttotal_val\t"
         << total_val
         << std::endl;
}

// Compare and return the object that total_val greater.
const Stock & Stock::richer(const Stock & s) const {
    // this->attribute is similar to access a pointer to struct.
    if (s.total_val > this->total_val) {
        return s;
    }

    return *this;
}