//
//  pointer_struct.c
//  clangSkill
//
//  Created by kaku on 2019/10/03.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

struct Person {
    char name[100];
    int age;
} p1 = {"kaku", 18}, p2;

struct Person show_struct(struct Person);

int main() {
    show_struct(p1);
    strcpy(p1.name, "gjs");

    // p2.age = 18;
    p2 = show_struct(p1);
    show_struct(p2);

    struct Person *p;
    p = &p1;
    printf("struct Person by pointer: p->name = %s, p->age = %d\n", p->name, p->age);
    printf("struct Person by pointer: (*p).name = %s, (*p).age = %d\n", (*p).name, (*p).age);
}


struct Person show_struct(struct Person p) {
    printf("struct Persion:\n");
    PRINT_STR(p.name);
    PRINT_INT(p.age);

    return p;
}
