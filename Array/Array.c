// WRITE A PROGRAM TO TAKE INPUTS FROM THE USER USING 2D ARRAY IN ORDER TO FORM 2 SEPERATE MATRICES ADD THEM.

#include <stdio.h>
int main()
{
    int a, b, d, e, i, j, sum[i][j], c[a][b], f[d][e];
    printf("\n 1st MATRIX :-\n");
    printf("\n");
    printf("ENTER THE NUMBER OF ROWS :-\n");
    scanf("%d", &a);
    printf("ENTER THE NUMBER OF COLUMNS :-\n");
    scanf("%d", &b);
    printf("NOW PLEASE ENTER NUMBER :-\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
    printf("\n 2nd MATRIX :-\n");
    printf("\n");
    printf("ENTER THE NUMBER OF ROWS AGAIN :-\n");
    scanf("%d", &a);
    printf("ENTER THE NUMBER OF COLUMNS AGAIN :-\n");
    scanf("%d", &b);
    printf("NOW PLEASE ENTER NUMBER :-\n");
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < e; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            for (i = 0; i < d; i++)
            {
                for (j = 0; j < e; j++)
                {
                    sum[i][j] = c[i][j] + f[i][j];
                    printf("%5d", sum[i][j]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
