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

Stock::Stock(const std::string & co, int n, double pr) {
    company = co;
    shares = n;
    share_val = pr;
    total_val = n * pr;
}

Stock::~Stock() {
    std::cout << "Bey ~ " << company << std::endl;
}

void Stock::acquire(const std::string & co, int n, double pr) {
    company = co;
    shares = n;
    share_val = pr;
    total_val = n * pr;
}

void Stock::show() {
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