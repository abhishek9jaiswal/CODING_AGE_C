#include<stdio.h>

int main()
{
    int n;
    printf("ENTER A NUMBER TO PRINT THAT:-\n");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
    int j=1;
    while(j<=n){
        printf("%d",j);
        j++;
    }
    printf("\n");
    i++;
    }
    return 0;
}