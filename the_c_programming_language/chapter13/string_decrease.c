//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main() {
    char s[] = "Hsjodi", *p;

    for (p=&s[5]; p >= s; p--) --*p;
    puts(s);
    return 0;
}
