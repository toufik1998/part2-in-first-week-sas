#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Ch;
    printf("Entrer votre lettre : ");
    scanf("%c", &Ch);

    if (isupper(Ch))
    {
        printf ("Votre lettre et en Majuscule");
    }
        else
    {
        printf("Votre lettre et en Miniscule");
    }
    return 0;
}
