//
//  pointer.c
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
    int array_var[5] = {-1,2,-3,4,-5};
    PRINT_INT(*array_var);
    PRINT_INT(array_var[0]);
    PRINT_INT(*(array_var + 1));
    printf("%p\n", array_var);
    printf("%p\n", array_var+1);

    int (*p_array)[5];
    p_array = &array_var;
    printf("A pointer to `int array[5]` address:  %p\n", p_array);
    printf("A pointer to `int array[5]` size:  %lu\n", sizeof(p_array));
    
    int *p = &array_var[0];
    printf("A pointer to `int` address:  %p\n", p);
    printf("A pointer to `int` size:  %lu\n", sizeof(p));
}
