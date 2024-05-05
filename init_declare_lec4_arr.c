#include <stdio.h>

int main(){
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int count;
    for(count=0; count<10; count++){
        printf("a[%d] is %d\n", count, a[count]);
    }

    return (0);
}