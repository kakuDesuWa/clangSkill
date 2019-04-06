//
//  filename.c
//  clangSkill
//
//  Created by kaku on 2019/03/31.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

#define NUM_ROW 5
#define NUM_COL 5

void two_dimension_array_printf(int a[][NUM_COL], int num_row, int num_col);

int main() {
  int row, col, *p, a[NUM_ROW][NUM_COL];
  two_dimension_array_printf(a, NUM_ROW, NUM_COL);
  for (p = a[0]; p < a[0] + NUM_COL; p++) {
    *p = 0;
  }
  two_dimension_array_printf(a, NUM_ROW, NUM_COL);
}

void two_dimension_array_printf(int a[][NUM_COL], int num_row, int num_col) {
  int *p;
  for (p = a[0]; p < a[0] + num_col; p++) {
    printf("\n");
    int *i;
    for (i = p; i < p + num_row; i++) {
      printf("%d ", *i);
    }
  }
}
