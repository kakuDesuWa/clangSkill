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
  printf("Please Enter 10 sequential number such as 1234567890:");
  // array initializer
  int a[10] = {
      1,
      2,
      3,
  };
  for (i = 0; i < 10; i++) {
    scanf("%1d", &a[i]);
  }
  for (i = 0; i < 10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}
