#include <stdio.h>

int main() {
    int a[100];
    float b[100];
    int c[1000][1000];

    printf("Size of int array is %zu bytes. \n", sizeof(a));
    printf("Size of float array is %zu bytes. \n", sizeof(b));
    printf("Size of 2D int array is %zu bytes. \n", sizeof(c));
    return 0;
}

//if the array is string, a character array, it should be ending with \0