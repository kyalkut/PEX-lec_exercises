#include <stdio.h>

void myFunction(); // Add the missing function declaration

int main() {
    myFunction();
    return(0);
}

void myFunction() {
    printf("I just got evicted ! \n");
}

