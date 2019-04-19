//
//  filename.c
//  clangSkill
//
//  Created kaku on 2019/04/16.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <stdarg.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

int error_printf(const char *format, ...) {
    static int num_error_times = 0;
    int n;
    va_list ap;

    num_error_times ++;
    fprintf(stderr, "** Error occur %d\n", num_error_times);
    va_start(ap, format);

    n = vfprintf(stderr, format, ap);
    va_end(ap);
    fprintf(stderr, "\n");
    return n;
}


int main() {
    error_printf("[%s] line: %d\n", "I", 33);
    error_printf("[%s] line: %d\n", "D", 34);
}
