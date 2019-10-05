//
//  stock.h
//  clangSkill
//
//  Created by kaku on 2019/10/05.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>
#include <string>

class Stock {

    std::string company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() {
        total_val = shares * share_val;
    }

public:
    Stock(const std::string & co = "No company", int n = 0, double pr = 0.0);
    ~Stock();
    void show() const;
    void acquire(const std::string & co, int n, double pr);
    const Stock & richer(const Stock & s) const;  // 注意每一个 const 的用途 :(
};
