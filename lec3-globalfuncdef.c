#include <stdio.h>

void print_xy(void);
int x = 23, y = 53;

int main() {
    print_xy();
    return 0;
}

void print_xy(void) {
    int x = 5;
    float y = 1.7;
    printf("Value of x is %d, value of y is %d. \n", x, y);
}