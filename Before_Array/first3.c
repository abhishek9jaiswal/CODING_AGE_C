#include <stdio.h>
int main()
{
    printf("PLEASE ENTER YOUR NUMBER :\n");
    int a;
    int i = 1;
    scanf("%d", &a);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", a, i, a * i);
        i = i + 1;
    }

    return 0;
}