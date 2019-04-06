//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main() {
  int a[] = {-1, -2, -3, -4, -5}, *p;
  p = a;

  printf("p: %p\t*p: %d\n", p, *p);

  printf("*p++: %d\n", *p++);
  printf("p: %p\t*p: %d\n", p, *p);

  printf("*(p++): %d\n", *(p++));
  printf("p: %p\t*p: %d\n", p, *p);

  printf("*++p: %d\n", *++p);
  printf("p: %p\t*p: %d\n", p, *p);

  printf("*(++p): %d\n", *(++p));
  printf("p: %p\t*p: %d\n", p, *p);

  printf("++*p: %d\n", ++*p);
  printf("p: %p\t*p: %d\n", p, *p);
}
