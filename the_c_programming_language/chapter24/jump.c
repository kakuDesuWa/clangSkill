//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/16.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <setjmp.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

static jmp_buf env;

void func(void);
void jump_func(void);

int main() {

    int ret;

    ret = setjmp(env);
    printf("setjmp returned %d\n", ret);
    if (ret != 0) {
        printf("Program terminates: longjmp called\n");
        return 0;
    }

    func();
    printf("Program terminates normally\n");
    return 0;
}

void func(void) {
    printf("func begins!\n");
    jump_func();
    printf("func returns!\n");
}

void jump_func(void) {
    printf("jump_func begins!\n");
    longjmp(env, 11);
    printf("jump_func returns!\n");
}
