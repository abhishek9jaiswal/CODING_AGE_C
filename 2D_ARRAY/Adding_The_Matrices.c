// WRITE A PROGRAM TO TAKE INPUTS FROM THE USER USING 2D ARRAY IN ORDER TO FORM 2 SEPERATE MATRICES ADD THEM.

#include <stdio.h>
int main()
{
    int a, b, i, j;
    printf("\n 1st MATRIX :-\n");
    printf("\n");
    printf("ENTER THE NUMBER OF ROWS :-\n");
    scanf("%d", &a);
    printf("ENTER THE NUMBER OF COLUMNS :-\n");
    scanf("%d", &b);
    printf("NOW PLEASE ENTER NUMBER :-\n");
    int c[a][b];
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
    int f[a][b];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }
    int sum;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            sum= c[i][j] + f[i][j];
            printf("%5d", sum);
        }
        printf("\n");
    }
    return 0;
}
