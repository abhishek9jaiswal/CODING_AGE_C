#include <stdio.h>
int main()
{
    int a;
    printf("Size of array:\n");
    scanf("%d", &a);
    int n[a];
    printf("Enter number:\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }
    int sum, s;
    int count = 0;
    int b;
    printf("Give number:\n");
    scanf("%d", &b);
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {

            sum = n[i] + n[j];
            s = sum + n[j + 1];
            if (b == s || b == sum)
            {
                count = 1;
            }
        }
    }
    if (count == 1)
    {
        printf("yes sum is present in this arry");
    }
    else
    {
        printf("No sum is not present in this array");
    }

    return 0;
}