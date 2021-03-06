//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/04/14.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define N 5

int array_search(int a[], int n, int key);

int main() {
  int a[N] = {1, 2, 3, 4, 5};
  int res, key = 6;

  res = array_search(a, N, key);
  if (res == TRUE) {
    printf("key %d in array a!\n", key);
  } else if (res == FALSE) {
    printf("key %d not in array a!\n", key);
  }
}

int array_search(int a[], int n, int key) {
  int *p;
  for (p = a; p < a + n; p++) {
    if (key == *p) {
      return TRUE;
    } else {
      printf("%d not equal to key(%d), contine\n", *p, key);
    };
  }
  return FALSE;
}
