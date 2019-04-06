//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

unsigned int string_len(char *s);

int main() {
    char str[] = "Hi i am kaku!";
    unsigned int l;
    l = string_len(str);
    printf("length of string is %d\n", l);
}

unsigned int string_len(char *s) {
    int n = 0;
    for (; *s; s++)
        n++;
    return n;
}
