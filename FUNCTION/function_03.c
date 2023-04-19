#include <stdio.h>
int fac(int a);

int main()
{
    int a, factorial;
    printf("PLEASE ENTER THE NUMBER OF WHICH YOU WANT TO KNOW THE FACTORIAL :- \n");
    scanf("%d", &a);
    factorial = fac(a);
    printf("THE FACTORIAL OF %d IS %d", a, factorial);

    return 0;
}
int fac(int a)
{
    if (a > 1)
    {
        return (a * fac(a - 1));
    }
}