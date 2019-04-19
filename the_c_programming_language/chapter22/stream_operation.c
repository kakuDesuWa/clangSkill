//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

#define FILE_NAME "test.md"

int main(int argc, char *argv[]) {
    PRINT_INT(argc);

    FILE *fp;
    fp = fopen(FILE_NAME, "w");

    if (!fp) {
        PRINT_STR("Can't open file");
        exit(1);
    }

    fclose(fp);

    if (!freopen(FILE_NAME, "w", stdout)) {
        PRINT_STR("Can't reopen file");
    }

    PRINT_STR("Invoke freopen success! (This info rewrite to file...)");

    return 0;
}
