// WRITE A PROGRAM USING ARRAY WHILE TAKING THE INPUT FROM THE USER TO KNOW THAT THE INPUTED ELEMENT IS HOW MANY TIMES IN THE ARRAY. 

#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER OF ARRAY :-\n");
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        printf("ENTER THE MARKS :-\n");
        scanf("%d", &b[i]);
    }
    int c;
    int count = 0;
    printf("ENTER THE MARKS TO KNOW THAT HOW MANY STUDENTS HAS SCORED THAT :-\n");
    scanf("%d", &c);
    for (int i = 0; i < a; i++)
    {
        if (b[i] == c)
        {
            count++;
        }
    }
    printf("%d IS %d TIMES.", c, count); 
    return 0;
}