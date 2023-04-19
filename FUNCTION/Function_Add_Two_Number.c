#include <stdio.h>
int addtwonumber(int a, int b)
{
    return a + b;
}

int main()
{
    int c, d;
    printf("ENTER THE FIRST NUMBER :-\n");
    scanf("%d", &c);
    printf("ENTER THE SECOND NUMBER :-\n");
    scanf("%d", &d);
    int e = addtwonumber(c, d);
    printf("THE ADDITION OF %d AND %d IS %d.", c, d, e);

    return 0;
}
