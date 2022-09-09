#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charachter;
    printf("Please enter a charachter \n");
    scanf(" %c", &charachter);
    switch(charachter){
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}
