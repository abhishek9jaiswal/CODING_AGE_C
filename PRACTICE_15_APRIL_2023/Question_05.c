// 5. Write a C program to calculate the factorial of a number using a for loop.

#include <stdio.h>
int main()
{
    int a, fact = 1, i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    printf("THE FACTORIAL OF %d IS %d.", a, fact);
    return 0;
}