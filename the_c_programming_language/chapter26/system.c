//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/16.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)


int main() {
    int status;
    status = system("ls > out.txt");
    return status;
}
