// WRITE A PROGRAM TO TAKE INPUT FROM USER IN THE FORM OF 0 AND 1 AND SORT[ASCENDING & DESCENDING] THEM.

#include <stdio.h>
int main()
{
    int a;
    printf("INPUT THE NUMBER :-\n");
    scanf("%d", &a);
    int b[a];
    int i ;
    for ( i = 0; i < a; i++)
    {
        while (b[a] == 1 || b[a] == 0)
        {
        printf("ENTER THE NUMBER :-\n");
        scanf("%d", &b[a]);
        }
        if(b[a]!=0 || b[a]!=1)
        {
        printf("INVALID INPUT.\n");
        printf("PLEASE ENTER THE VALID NUMBER :-\n");
        scanf("%d", &b[a]);  
        }

        
    }
    
    return 0;
}