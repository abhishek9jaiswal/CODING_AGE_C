#include <stdio.h>

void primenumber(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("THE ENTERED NUMBER IS A PRIME NUMBER.");
        }
        else
        {
            printf("THE ENTERED NUMBER IS NOT A PRIME NUMBER.");
        }
    }
}
int main()
{
    int b;
    printf("ENTER THE NUMBER :-\n");
    scanf("%d", &b);
    primenumber(b);

    return 0;
}