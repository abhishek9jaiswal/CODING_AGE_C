#include<stdio.h>
int main () {
    printf("ENTER YOUR NUMBER :-\n") ;
    int num;
    scanf("%d",&num);
    if (97%num==0) {
        printf("THE GIVEN NUMBER IS DIVISIBLE BY 97.") ;
    }
    else {
        printf("THE GIVEN NUMBER IS NOT DIVISIBLE BY 97.") ;
    }
    return 0;
} 