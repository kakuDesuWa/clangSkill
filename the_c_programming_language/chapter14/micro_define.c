//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)

#define MAX(x, y) (x > y ? x : y)
#define TOUPPER(c) ('a' <= (c) && (c)<='z' ? (c) - ('a'-'A') : (c))

int main() {
    int x = 0, y = 1, z;
    char c = 'a';
    z = MAX(x, y);
    PRINT_INT(z);
    c = TOUPPER(c);
    PRINT_CHR(c);
}
