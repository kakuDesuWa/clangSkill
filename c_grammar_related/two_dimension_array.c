//
//  array.c
//  clangSkill
//
//  Created by kaku on 2019/10/04.
//  Copyright © 2019 kaku. All rights reserved.
//

#include <stdio.h>

#define PRINT_INT(i) printf(#i ": %d\n", i)
#define PRINT_CHR(c) printf(#c ": %c\n", c)
#define PRINT_STR(s) printf(#s ": %s\n", s)

#define ARRAY_SIZE_ONE 3
#define ARRAY_SIZE_TWO 5


void show_array(const int arr[][ARRAY_SIZE_TWO], int size_one, int size_two);
void init_array(int (*arr)[ARRAY_SIZE_TWO], int size_one, int size_two);

int main() {
    int arr[ARRAY_SIZE_ONE][ARRAY_SIZE_TWO];

    init_array(arr, ARRAY_SIZE_ONE, ARRAY_SIZE_TWO);
    show_array(arr, ARRAY_SIZE_ONE, ARRAY_SIZE_TWO);
}


void show_array(const int arr[][ARRAY_SIZE_TWO], int size_one, int size_two) {
    for (int i = 0; i < size_one; i++) {
        for (int j = 0; j < size_two; j++) {
            PRINT_INT(arr[i][j]);
        }
        printf("\n");
    }
}

void init_array(int (*arr)[ARRAY_SIZE_TWO], int size_one, int size_two) {
    int i, j;
    for (i = 0; i < size_one; i++) {
        for (j = 0; j < size_two; j++) {
           *(*(arr + i) + j) = size_two - j;
        }
    }
}
