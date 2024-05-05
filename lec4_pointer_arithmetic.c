#include <stdio.h>
# define MAX 15

    int a[MAX] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                   11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                   21, 22, 23, 24 };

    int *p_a, count;

    int main () {
        p_a = a;
        printf("Index\tValue\tAddress\n");
        for (count = 0; count<MAX; count++){
            printf("%d\t%d\t%p\n", count, *p_a++, p_a);
        }
        return(0);
    }

    // definition of MAX value limits the counter. does not depend on array size if deinition is smaller then no. of elements in array.