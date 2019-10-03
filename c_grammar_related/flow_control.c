//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int main() {
  int i = 1, j = 5;

  // while loop
  printf("\twhile loop\n");
  while (i < j) {
    printf("current i: %10d j: %10d\n", i, j);
    i++;
    // continue;
    // break;
    // if (i == 3) goto done;
  }

  // done:
  // printf("goto work!\n");

  // for loop
  printf("\tfor loop\n");
  for (int k = 0; k < j + 5; k++) {
    printf("current k: %10d j + 5: %10d\n", k, j + 5);
  }

  // do while loop
  printf("\tdo while loop\n");
  do {
    printf("current i: %10d j + 10: %10d\n", i, j + 10);
    ++i;
  } while (i < j + 10);
}
