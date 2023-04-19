//WRITE A PROGRAM TO PRINT DAY NAME USING SWITCH CASE.

#include<stdio.h>
int main (){
    printf("ENTER THE NUMBER (1-7) TO GET THE DAY NAME AS OUTPUT:-\n") ;
    int a ;
    scanf("%d",&a) ;
    switch (a){
        case 1 :
        printf("MONDAY") ;
        break;
        case 2 :
        printf("TUESDAY") ;
        break;
        case 3 :
        printf("WEDNESDAY") ;
        break;
        case 4 :
        printf("THURSDAY") ;
        break;
        case 5 :
        printf("FRIDAY") ;
        break;
        case 6 :
        printf("SATURDAY") ;
        break;
        case 7 :
        printf("SUNDAY") ;
        break;
        default :
        printf("INVALID INPUT.") ;
    }
    return 0;
}