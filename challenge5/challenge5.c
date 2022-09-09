#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, month, days, hours, minutes, secondes;
    printf("Please enter a year \n");
    scanf("%d", &year);
    month = 12;
    days = 365;
    hours = days * 24;
    minutes = hours * 60;
    secondes = minutes * 60;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        days = 366;
        printf("%d is leap \n", year);
        printf("\n the days of year leap  = %d \n", days);

    }else{
        days = 365;
        printf("%d it is not leap \n", year);
        printf("the days of year not leap  = %d \n", days);
    }
    printf("month = %d \n", month);
    printf("hours = %d \n", hours);
    printf("secondes = %d", secondes);



    return 0;
}
