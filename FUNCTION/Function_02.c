#include <stdio.h>
int fact();
void main()
{
    printf("ENTER THE NUMBER OF WHICH YOU WANT TO KNOW THE FACTORIAL :-\n");
    printf("FACTORIAL OF A GIVEN NUMBER IS :- %d\n", fact());
}
int fact()
{
    int i, fact = 1, a;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}