//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/03/31.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

int func1(int a[], int n);
int func2(int a[], int n);

int main() {
  int a[5] = {1, 2, 3, 4, 5}, res;
  res = func1(a, sizeof(a) / sizeof(int));
  printf("sum array: %d\n", res);
  res = func2(a, sizeof(a) / sizeof(int));
  printf("sum array: %d\n", res);
}

int func1(int a[], int n) {
  int i, sum;

  sum = 0;
  for (i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}

int func2(int a[], int n) {
  int *p, sum;
  p = a;

  // Important: Do not use uninitialize variable.
  sum = 0;
  for (; p < a + n; p++) {
    sum += *p;
    printf("current element is %d, sum is %d\n", *p, sum);
  }
  return sum;
}
