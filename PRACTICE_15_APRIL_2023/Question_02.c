// 2. Write a C program to determine if a given number is positive, negative, or zero.

#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER :-\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("THE GIVEN NUMBER IS POSITIVE.");
    }
    else if (a < 0)
    {
        printf("THE GIVEN NUMBER IS NEGATIVE.");
    }
    else 
    {
        printf("THE GIVEN NUMBER IS ZERO.");
    }

    return 0;
}