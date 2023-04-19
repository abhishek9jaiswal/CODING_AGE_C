// 7. Write a C program to find the sum of all elements in an integer array using a for loop.

#include <stdio.h>
int main()
{
    int a, b[a], i, sum = 0;
    printf("ENTER THE SIZE OF AN ARRAY :-\n");
    scanf("%d", &a);
    printf("PLEASE ENTER THE NUMBER :-\n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
        sum = sum + b[i];
    }

    printf("THE SUM OF AVOBE ENTERED NUMBER IS %d", sum);

    return 0;
}