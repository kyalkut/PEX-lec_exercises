#include <stdio.h>
#include "funcs.h"

int main() {
    int x_cube;
    float x_half;
    int x = 3;

    x_cube = cube(x);
    x_half = half(x);

    printf("x = %d, x_cube = %d, x_half = %f\n", x, x_cube, x_half);
    return(0);
}