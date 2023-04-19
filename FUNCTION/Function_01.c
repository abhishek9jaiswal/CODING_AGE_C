// WAF to take two nos and return the max value
// WAF to take two nos and print the min  value
// WAP to use the above functions.

#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
void main()
{
    int a, b, maximum, minimum;
    printf("\nPLEASE ENTER THE TWO NUMBERS :-\n");
    scanf("%d", &a);
    scanf("%d", &b);
    maximum = max(a, b);
    printf("\nTHE MAXIMUM NUMBER IS %d\n", maximum);
    minimum = min(a, b);
    printf("\nTHE MINIMUM NUMBER IS %d", minimum);
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int min(int a, int b)
{
    return (b > a) ? a : b;
}
