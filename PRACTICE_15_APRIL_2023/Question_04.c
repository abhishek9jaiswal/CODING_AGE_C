// 4. Write a C program to find the roots of a quadratic equation using if-else statements.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER THE NUMBER :-\n");
    scanf("%d %d %d", &a, &b, &c);
    float d = b * b - (4 * a * c);
    printf("%f", d);
    if (d < 0)
    {
        printf("THE NUMBER IS NON REAL.");
    }
    else if (d == 0)
    {
        printf("THE NUMBER IS REAL AND EQUAL.");
    }
    else
    {
        printf("THE NUMBER IS RATIONAL AND IRRRATIONAL.");
    }
    return 0;
}
