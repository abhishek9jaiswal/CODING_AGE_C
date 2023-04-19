// WRITE A PROGRAM TO CHECK WHETHER AN ALPHABET IS VOWEL OR CONSONANT USING SWITCH CASE.

#include <stdio.h>
void main()
{
    printf("ENTER AN ALPHABET:-\n");
    char a;
    scanf("%c", &a);
    switch (a)
    {
    case 'A':
    case 'a':
        printf("THE ENTERED ALPHABET IS A VOWEL.\n");
        break;
    case 'E':
    case 'e':
        printf("THE ENTERED ALPHABET IS A VOWEL.\n");
        break;
    case 'I':
    case 'i':
        printf("THE ENTERED ALPHABET IS A VOWEL.\n");
        break;
    case 'O':
    case 'o':
        printf("THE ENTERED ALPHABET IS A VOWEL.\n");
        break;
    case 'U':
    case 'u':
        printf("THE ENTERED ALPHABET IS A VOWEL.\n");
        break;
    default:
        printf("THE ENTERED ALPHABET IS AN CONSONANT.\n");
    }
   
}