//pointers store memoy locations

// * is indirection operator
// & is address operator
// variablename provides direct access
// array name is a pointer to the first byte

#include <stdio.h>

int main(){
    int i = 99;
    int *pointer_to_i = &i;
    
    printf("i is %d, *pointer_to_i is %d\n", i, *pointer_to_i);
    printf("%p, %p\n", &i, pointer_to_i);
}

