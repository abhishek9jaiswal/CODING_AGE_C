// 3. Write a C program to check if a given number is even or odd using if-else statements.

#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER :-\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("THE GIVEN NUMBER IS EVEN NUMBER.");
    }
    else
    {
        printf("THE GIVEN NUMBER IS ODD NUMBER.");
    }
    return 0;
}