//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    strcpy(s1, "computer");
    strcpy(s2, "science");
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);
    else
        strcat(s2, s1);
    s2[strlen(s2) - 6] = '\0';

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
}
