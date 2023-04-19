// 1. Write a C program to find the largest among three numbers using if statements.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER THE NUMBER :-\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("NOW THE MAXIMUM NUMBER BETWEEN %d , %d AND %d IS :- %d\n", a, b, c, a);
    }
    else if (b>a && b>c)
    {
        printf("NOW THE MAXIMUM NUMBER BETWEEN %d , %d AND %d IS :- %d\n", a, b, c, b);
    }
    else 
    {
        printf("NOW THE MAXIMUM NUMBER BETWEEN %d , %d AND %d IS :- %d\n", a, b, c, c);
    }
    return 0;
}