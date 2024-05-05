#include <stdio.h>

void print_int(int i); //function definition

int main() {
    int i = 23;
    print_int(i);
    return 0;
}

void print_int(int i) { //function declaration
    printf("%d\n", i);
}