// TAKE AN INPUT ARRAY OF SIZE N & TAKE AN INDEX FROM THE USER AND DELETE THE ELEMENT FROM THE INDEX OF THE ARRAY.

#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE SIZE OF ARRAY :-\n");
    scanf("%d", &a);
    int b[a];
    printf("PLEASE ENTER THE ELEMENT :-\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b[i]);
    }
    int c;
    printf("NOW PLEASE ENTER THE INDEX :-\n");
    scanf("%d", &c);
    for (int i = c - 1; i < a ; i++)
    {
        b[a] = b[i + 1];
    }
    for (int i = 0; i < a - 1; i++)
    {
        printf("%d",b[i]);
    }
        return 0;
}