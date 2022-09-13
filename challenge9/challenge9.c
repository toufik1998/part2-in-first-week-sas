#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Entrer un caractere :");
    scanf("%c",&c);


    if ( c>=65 && c<=90 ) {
        printf("Le caractere fait partie des alphabets \n");
        printf("Le caractere est en majiscule \n");
    }

    else if (c >= 97 && c <= 122) {
        printf("Le caractere fait partie des alphabets \n");
        printf("Le caractere est en miniscule \n");
    }

    else
	{
        printf("Le caractere n'est pas un alphabet");
	}
    return 0;
}
