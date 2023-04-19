#include <stdio.h>
void addtwonumber(int a, int b)
{
    int e = a + b;
    printf("THE ADDITION OF %d AND %d IS %d",a,b,e);
}
int main()
{
    int c, d;
    printf("ENTER THE FIRST NUMBER :-\n");
    scanf("%d", &c);
    printf("ENTER THE SECOND NUMBER :-\n");
    scanf("%d", &d);
    addtwonumber(c, d);

    return 0;
}