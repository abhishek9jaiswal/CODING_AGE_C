// WRITE A PROGRAM TO PRINT 10 EVEN NUMBERS.

#include <stdio.h>
int main()
{
    printf("THE FIRST 10 EVEN NUMBER IS:-\n");
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i * 2);
        i = i + 1;
    }
    return 0;
}