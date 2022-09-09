#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, x1, x2, x, delta;
    printf("Please enter A \n");
    scanf("%d", &a);
    printf("Please enter B \n");
    scanf("%d", &b);
    printf("Please enter C \n");
    scanf("%d", &c);
    delta = pow(-b, 2) - -4 * a * c;
    if(delta < 0){
        printf("we dont have any solution \n");
    }else if(delta == 0){
        x = (-b) / (2 * a);
        printf("The solution is %d", x);
    }else{
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("the solution of X1 is %d \n", x1);
        printf("the solution of X2 is %d", x2);
    }

    return 0;
}
