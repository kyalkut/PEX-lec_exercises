#include <stdio.h>

int main ()
{
    if (4 > 2 == 3 > 1)
    {
        printf("Both are true.\n");
        printf("4 > 2 gives %d. \n", 4 > 2);
        printf("3 > 1 gives %d. \n", 3 > 1);
        printf("4 > 2 == 3 > 1 gives %d. \n", 4 > 2 == 3 > 1);
        printf("So, both are true.\n");
    }

    return 0;
}