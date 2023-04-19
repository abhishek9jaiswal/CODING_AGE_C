// WRITE A PROGRAM TO TAKE INPUTS [IN THE FORM OF 0 AND 1 ONLY] FROM THE USER USING 2D ARRAY IN ORDER TO FORM A MATRIX
// AND SEPERATE IT DIAGONALLY.
// EXAMPLE :-
//   1      0        0

//   1      0        0

//   1      1        0

#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("ENTER THE NUMBER OF ROWS :- \n");
    scanf("%d", &a);
    printf("ENTER THE NUMBER OF COLUMNS :- \n");
    scanf("%d", &b);
    int c[a][b];
    int d = c[a][b];
    printf("PLEASE ENTER THE NUMBER [0 AND 1 ONLY] :- \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            while (d == 1 || d == 0)
            {
                scanf("%d", &d);
            }
            if (d != 1 || d != 0)
            {
                printf("INVALID INPUT.\n");
                printf("PLEASE ENTER THE NUMBER AGAIN :- \n");
                scanf("%d", &d);
            }
        }
    }
    return 0;
}