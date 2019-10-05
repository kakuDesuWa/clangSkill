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
    Stock kakuHolder("Tiger Brokers", 1, 8.0);

    // kaku_holder.acquire("Tiger Brokers", 1, 8.0);
    kakuHolder.show();

    Stock unkHolder;
    unkHolder.show();
}