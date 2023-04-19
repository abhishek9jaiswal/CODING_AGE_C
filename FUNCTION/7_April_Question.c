// WRITE A PROGRAM TO TAKE A NUMBER AND RETURN 0 IF IT'S PRIME , RETURN 1 IF IT'S EVEN AND 2 IF ITS ODD.
// TAKE 10 USER INPUT AND USE ABOVE FUNCTION AND PRINT THE SUM OF OUTPUTS FOR ALL NUMBER.

#include <stdio.h>

int checkeven(int a)
{
    if (a % 2 == 0)
    {
        printf("EVEN.\n");
        return 1;
    }
}
int checkodd(int b)
{
    if (b % 2 != 0)
    {
        printf("ODD.\n");
        return 2;
    }
}

int main()
{
    int b, d, e, f, sum = 0, i;
    printf("ENTER THE NUMBER :-\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b);
        d = checkeven(b);
        e = checkodd(b);
    }
    sum = sum + i;
    printf("THE SUM OF ABOVE IS %d", sum);

    return 0;
}