//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    for (i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    char **p;
    for (p = &argv[1]; *p != NULL; p++) {
        printf("%s\n", *p);
    }

    // notice different with this!
    char *p2;
    p2 = argv[1];
    printf("%s\n", p2);
}
