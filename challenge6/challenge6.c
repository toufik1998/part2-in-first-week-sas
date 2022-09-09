#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("please enter a number \n");
    scanf("%d", &number);
    if(number < 0){
        printf("This number is negative \n");
    }else if(number > 0){
        printf("This number is positive \n");
    }else{
        printf("This number equal to 0");
    }
    return 0;
}
