#include <stdio.h>

int main() {
    int i = 1, j = 2;
    char ch;
    printf("%d, %d Enter a number:\n", i, j);
    scanf("%d", &i);
    printf("%d\n", i);
    ch = getchar();
    putchar(ch);
    i = 0b1000001;
    printf("%d\n", i);
    i = 0101;
    printf("%d\n", i);
    i = 0x41;
    printf("%d\n", i);
    i = 'A';
    printf("%d\n", i);
}
