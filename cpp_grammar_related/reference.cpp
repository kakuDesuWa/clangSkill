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
#define PRINT_STR(s) printf(#s ": %s\n", s)

void referenceFunc(char &ch);

int main() {
    char ch = 'a';
    PRINT_CHR(ch);
    referenceFunc(ch);
    PRINT_CHR(ch);
}

void referenceFunc(char &ch) {
    ch = 'A';
}
