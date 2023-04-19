//  WRITE A PROGRAM IN C TO READ N NUMBER OF VALUES IN AN ARRAY AND DISPLAY THEM IN REVERSE ORDER.
//  EXAMPLE :- 
//  INPUT THE NUMBER OF ELEMENTS TO STORE IN THE ARRAY :- 3 
//  INPUT 3 NUMBER OF ELEMENTS IN THE ARRAY :-
//  ELEMENT :- 0 : 2 
//  ELEMENT :- 1 : 5
//  ELEMENT :- 2 : 7
//  EXPECTED OUTPUT :- 
//  THE VALUE STORED INTO THE ARRAY ARE :- 
//  2  5  7 
//  THE VALUE STORE INTO THE ARRAY IN REVERSE ARE :- 
//  7  5  2 

#include <stdio.h>
int main()
{
    int a;
    printf("INPUT THE NUMBER OF ELEMENTS TO BE STORED IN THE ARRAY :-\n");
    scanf("%d", &a);
    printf("INPUT %d NUMBERS OF ELEMENTS IN THE ARRAY.\n", a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        printf("ELEMENT :- %d : ", i);
        scanf("%d", &b[i]);
        printf("\n");
    }
    printf("EXPECTED OUTPUT :-\n");
    printf("THE VALUE STORED INTO ARRAY ARE :-\n");
    for (int i = 0; i < a; i++)
    {
        printf("%3d", b[i]);
    }
    printf("\n");
    printf("THE VALUE STORE INTO THE ARRAY IN REVERSE ARE :-\n");
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%3d", b[i]);
    }

    return 0;
}