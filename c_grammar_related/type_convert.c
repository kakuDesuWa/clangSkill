//
//  type_convert.c
//  clangSkill
//
//  Created by kaku on 2019/10/03.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)


int main() {
    char chr = 'a';
    PRINT_CHR(chr);
    PRINT_INT( (int) chr );
}
