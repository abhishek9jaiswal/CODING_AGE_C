// 10. Write a C program to count the number of even and odd elements in an array of size n.

#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE SIZE OF AN ARRAY :-\n");
    scanf("%d", &a);
    int b[a];
    printf("PLEASE ENTER THE NUMBER :-\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    int counteven = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i] % 2 == 0)
        {
            counteven++;
        }
    }
    printf("THE EVEN NUMBER IN AN ARRAY IS %d\n", counteven);
    int countodd = 0;
    for (int i = 0; i < a; i++)
    {
        if (b[i] % 2 != 0)
        {
            countodd++;
        }
    }
    printf("THE ODD NUMBER IN AN ARRAY IS %d\n", countodd);
    return 0;
}
