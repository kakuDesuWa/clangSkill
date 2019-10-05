//
//  stockTGER.cpp
//  clangSkill
//
//  Created by kaku on 2019/10/05.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <iostream>

#include "stock.h"


int main() {
    // Initialize
    Stock unkHolder;
    unkHolder.show();

    Stock kakuHolder1("Tiger Brokers", 10, 8.0);
    // kakuHolder1.acquire("Tiger Brokers", 1, 8.0);
    kakuHolder1.show();

    // For c++11 feature, should compile with -std=c++11 option.
    Stock kakuHolder2 = {"Tiger Brokers", 1, 8.0};
    // Stock kakuHolder2("Tiger Brokers 2", 1, 8.0);
    kakuHolder2.show();
    Stock & kakuHolder2Ref = kakuHolder2;
    kakuHolder2.acquire("Tiger Brokers 2 Reposition", 1, 22.0);
    kakuHolder2Ref.show();

    const Stock & kakuHolder3 = kakuHolder1.richer(kakuHolder2);
    kakuHolder3.show();
}