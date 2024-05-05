#include <stdio.h>

int i[10] = {1,2,3,4,5,6,7,8,9,10};

void print_first_element(int array[], int size) ;

    int main () {
        int *p_i;
        p_i = i;

        print_first_element(p_i, 10);
        return (0);
    
    }

    void print_first_element(int array[], int size){
        printf("Firs element of the array is : %d\n", array[0]);
    }
