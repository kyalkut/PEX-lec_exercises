#include <stdio.h>

int main() 
{
    int i = 8, j = 4, k = 3;
    printf("i / j = %d\n, i/j");
    printf("i / k = %d\n, i/k");

    float res = (float)i / k;
    printf("i / k = %f\n", res);
    res = i / (float)k;
    printf("i / k = %f\n", res);

    res = (float) (i / k);
    printf("i / k = %f\n", res);

    return 0;
}
