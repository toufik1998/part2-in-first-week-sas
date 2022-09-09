#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Please enter a number \n");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("This number is odd");
    }else{
        printf("This number is even");
    }
    return 0;
}
