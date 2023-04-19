// 8. Write a C program to find the product of all elements in a floating-point array using a for loop.

#include <stdio.h>
int main()
{
    int a, i;
    printf("ENTER THE SIZE OF AN ARRAY :-\n");
    scanf("%d", &a);
    float b[a], product = 1;
    printf("PLEASE ENTER THE NUMBER :-\n");
    for (i = 0; i < a; i++)
    {
        scanf("%f", &b[i]);
        product = product * b[i];
    }

    printf("THE PRODUCT OF AVOBE ENTERED NUMBER IS %f", product);

    return 0;
}