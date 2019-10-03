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


int main() {
    struct Person {
        char name[100];
        int age;
    } p1 = {"kaku", 18}, p2;

    printf("struct Person: p1.name = %s, p1.age = %d\n", p1.name, p1.age);

    strcpy(p1.name, "kaku");
    p2.age = 18;
    printf("struct Person: p2.name = %s, p2.age = %d\n", p2.name, p2.age);

    struct Person *p;
    p = &p1;
    printf("struct Person by pointer: p->name = %s, p->age = %d\n", p->name, p->age);
    printf("struct Person by pointer: (*p).name = %s, (*p).age = %d\n", (*p).name, (*p).age);
}
