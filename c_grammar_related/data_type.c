//
//  data_type.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main() {
  // int (long int, short int, unsigned int, unsigned long int, unsigned short
  // int), float (double), char
  int i, j = 11;
  i = 1;
  float f = 1.1;
  printf("two variable there are %d, %d, %10.5f\n", i, j, f);

  // array of int(float, char)
  printf("Please Enter 5 sequential number such as 12345:");

  // array initializer
  int a[5] = {
      1,
      2,
      3,
  };

  for (i = 0; i < 5; i++) {
    scanf("%1d", &a[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  // typedef struct
  typedef struct {
      char name[20];
      int  age;
  } Person;

  Person p = {"kaku", 18};
  printf("Person.name: %s Person.age: %d\n", p.name, p.age);

  // struct tag define
  struct PersonTag {
      char name[20];
      int  age;
  } p1 = {"gjs", 18}, p2 = {"kaku", 18};

  printf("PersonTag.name: %s PersonTag.age: %d\n", p1.name, p1.age);
  printf("PersonTag.name: %s PersonTag.age: %d\n", p2.name, p2.age);

  // typedef enum
  typedef enum {A, B, C, D} Alphabet;
  Alphabet e;
  e = A;
  printf("Alphabet e: %d\n", e);
  printf("Alphabet e: %d\n", B);
}
