//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    strcpy(str, "tire-bouchon");
    strcpy(&str[4], "d-or-wi");
    strcat(str, "red?");
    printf("%s\n", str);
}
