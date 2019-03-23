//
//  filename.c
//  clangSkill
//
//  Created by kaku on 201x/xx/xx.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#define N 10

int main() {
  int i;
  int a[N];

  printf("Please Enter 10 number sperate by space:");
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }

  printf("Reverse Input array!\n");
  for (i = N - 1; i > -1; i--) {
    printf("%d ", a[i]);
  }
  return 0;
}
