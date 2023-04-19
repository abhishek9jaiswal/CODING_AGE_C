#include <stdio.h>

int main()
{
    int a;
    int b = 0, c = 1, d;
    printf("\nPLEASE ENTER THE NUMBER :-\n");
    scanf("%d", &a);
    printf("\nTHE FIBONACCI SERIES ARE:-\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\t", b);
        d = b + c;
        b = c;
        c = d;
    }
    return 0;
}