// WRITE A PROGRAM TO TAKE INPUT FORM THE USER UNTIL HE GIVES 13 AS INPUT USING DO WHILE LOOP .

#include <stdio.h>
int main()
{
    int a;
    do
    {
        printf("ENTER A NUMBER :-\n");
        scanf("%d", &a);
    } while (a != 13);
    return 0;
}