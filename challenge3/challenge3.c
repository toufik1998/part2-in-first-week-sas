#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, somme;
    printf("please enter number one \n");
    scanf("%d", &number1);
    printf("please enter number two \n");
    scanf("%d", &number2);
    if(number1 == number2){
        somme = (number1 + number2) * 3;
        printf("The triple of  sum  number1 & number2 is %d", somme);
    }else{
        somme = number1 + number2;
        printf("the sum of number1 & number2 is %d", somme);
    }
    return 0;
}
