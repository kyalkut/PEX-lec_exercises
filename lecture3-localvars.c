#include <stdio.h>

void print_xy(void);

int main(void) {
    int x = 23, y = 45;
    print_xy();
    return 0;
}

void print_xy(void) {
    int x = 12, y = 34;
    printf("x = %d, y = %d\n", x, y);
}