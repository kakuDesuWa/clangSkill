//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main() {
    char chr;
    char str[] = "I a string :)";
    printf("Input a character:");
    chr = getchar();
    putchar(chr);
    printf("\n");

    puts(str);

    printf("%s\n", str);
    printf("Input a sentence:");

    gets(str);
    printf("Input a sentence:");
    puts(str);
    scanf("%s", str);
    puts(str);
}
