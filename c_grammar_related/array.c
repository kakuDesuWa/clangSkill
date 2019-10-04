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

#define ARRAY_SIZE 5


void show_array(const int arr[], int size);
int init_array(int *arr, int size);

int main() {
    int arr[ARRAY_SIZE];
    int size;

    size = init_array(arr, ARRAY_SIZE);
    show_array(arr, size);
}


void show_array(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        PRINT_INT(arr[i]);
    }
    // read-only variable is not assignable
    // arr[0] = -1
}

int init_array(int *arr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(arr + i) = size - i;
    }
    return i;
}
