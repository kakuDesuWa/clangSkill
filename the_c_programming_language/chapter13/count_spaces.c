//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int count_spaces(const char *str);

int main() {
    char string[] = "Hi i am kaku:)";
    int res;
    res = count_spaces(string);
    puts(string);
    printf("The sentence has %d white spaces!\n", res);
}

int count_spaces(const char *str) {
    int num = 0;
    for (; *str != '\0'; str++) {
        if (*str == ' ') {
            num ++;
        }
    }
    return num;
}
