//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

#define ARRAY_LENGTH 5


int main() {
    int *p, i;
    p = (int *)malloc(ARRAY_LENGTH * sizeof(int));

    // init array
    for (i = 0; i < ARRAY_LENGTH; i++) {
        *(p + i) = i;
    }

    // display array
    for (i = 0; i < ARRAY_LENGTH; i++) {
        printf("%d ", p[i]);
    }
}
