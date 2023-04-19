// WRITE A PROGRAM TO TAKE A INPUT FROM USER AND PRINT YOUR NAME THAT MANY TIMES.

#include<stdio.h>
int main (){
    printf("ENTER A NUMBER FOR TIMES IN ORDER TO PRINT YOUR NAME:-\n") ;
    int a ;
    scanf("%d",&a) ;
    int i= 1;
    while (i<=a)  {
        printf("%d.ABHISHEK JAISWAL.\n", i) ;
        i =i+1 ;
    }
    return 0;
}
