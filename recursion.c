#include <stdio.h>

unsigned int factorial (unsigned int i);

int main () {
    unsigned int f;
    unsigned int x = 0;
    f = factorial(x);
    printf("%d! = %d\n", x, f);
    return 0;
}


unsigned int factorial (unsigned int i) {
    if(i <= 1) {
        return 1;

        if (i == 0) {
            return 1;    
        }
    }
    
    return i * factorial(i - 1);
}