#include <stdio.h>

void print_integer(void);

int main() {
    print_integer();
    print_integer();
    print_integer();
    return(0);
}

void print_integer(void){
    static int x = 1;
    printf("x = %d\n", --x);
}