#include <stdio.h>

int main(){
    int point[31], count;
    for(count = 0; count < 31; count++){
        printf("Enter smiley points for May %d. \n", count+1);
        scanf("%d, &point[count]");
        }

    for(count = 0; count < 31; count++){
        printf("Smiley points for May %d is %d\n", count+1, point[count]);
        return(0);
    }

}