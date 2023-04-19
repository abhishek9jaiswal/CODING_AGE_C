#include<stdio.h>
int main (){
    int a ;
    printf("ENTER A NUMBER TO PRINT FIRST N NATURAL NUMBERS TILL THAT NUMBER :-\n");
    scanf("%d",&a); 
    int i=1 ;
    while(i<=a){ 
        printf("%d\n",i);
        i=i+1;
    }
    return 0;

}