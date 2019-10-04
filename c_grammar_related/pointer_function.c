//
//  pointer_function.c
//  clangSkill
//
//  Created by kaku on 2019/10/04.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

void show(int, int (*beautify)(int));
int add_one(int);
int double_once(int);

int main() {
    int i = 10;
    show(i, add_one);
    show(i, double_once);
}

void show(int i, int (*beautify)(int)) {
    i = (*beautify)(i);
    i = beautify(i);
    PRINT_INT(i);
}

int add_one(int i) {
    return i + 1;
}

int double_once(int i) {
    return i * 2;
}
