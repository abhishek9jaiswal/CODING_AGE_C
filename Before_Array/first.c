#include<stdio.h>
int main (){
    printf("ENTER YOUR NUMBER :\n") ;
    printf("AND CHOOSE WHICH OPERATOR YOU WANT TO USE :\n") ;
    printf("+ FOR ADDITION\n") ;
    printf("- FOR SUBTRACTION\n") ;
    printf("* FOR PRODUCT\n") ;
    printf("/ FOR DIVISION\n") ;
    int a ;
    scanf(" %d\n", &a) ;
    char op ;
    scanf("%c",&op) ;
    int b ;
    scanf("%d",&b) ;
    if (op=='+') {
        printf("ADDITION %d AND %d IS %d", a,b,a+b) ;
    }
    else if (op=='-') {
        printf("SUBTRACTION %d AND %d IS %d",a,b,a-b) ;
    }
    else if (op=='*') {
        printf("PRODUCT %d AND %d IS %d",a,b,a*b) ;
    }
    else {
        printf("DIVISION %d AND %d IS %d",a,b,a/b) ;
    }
    return 0 ;
}