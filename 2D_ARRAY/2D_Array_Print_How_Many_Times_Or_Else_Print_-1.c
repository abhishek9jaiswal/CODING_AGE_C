// WRITE A PROGRAM TO TAKE INPUTS FROM THE USER USING 2D ARRAY IN ORDER TO FORM A MATRIX
// AND THEN AGAIN TAKE A INPUT FROM THE USER IF THE GIVEN INPUT IS IN THE MATRIX
// THEN PRINT HOW MANY TIMES THAT NUMBER IS THERE IN THE MATRIX OR ELSE PRINT -1.

#include <stdio.h>
int main()
{
    int a, b, i, j, e, count = 0;
    printf("ENTER THE NUMBER OF ROWS :-\n");
    scanf("%d", &a);
    printf("ENTER THE NUMBER OF COLUMNS :-\n");
    scanf("%d", &b);
    int c[a][b];
    printf("NOW PLEASE ENTER NUMBER :-\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
    printf("PLEASE ENTER THE NUMBER :-\n");
    scanf("%d", &e);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (c[i][j] == e)
            {
                count++;
            }
        }
    }
    if (count != 0)
    {
        printf("%d", count);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
