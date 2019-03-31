//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/03/31.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main() {
    int a[10], *p;
    p = a;

    if (p == &a[0]) {
        printf("p == a[0] is true\n");
    }

    if (*p == a[0]) {
        printf("*p == a[0] is true\n");
    }

    if (p[0] == a[0]) {
        printf("p[0] == a[0] is true\n");
    }
}
