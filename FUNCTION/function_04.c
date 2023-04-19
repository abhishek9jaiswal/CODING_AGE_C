// WRITE A PROGRAM TO ENTER A NUMBER USING VOID FUNCTION. 

#include <stdio.h>
void oddeven(int a)
{
    if (a % 2 == 0)
    {
        printf("THE NUMBER IS EVEN.");
    }
    else
    {
        printf("THE NUMBER IS ODD.");
    }
}
int main()
{
    int a;
    printf("ENTER THE NUMBER :-\n");
    scanf("%d", &a);
    oddeven(a);

    return 0;
}
