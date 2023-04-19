//  WRITE A PROGRAM IN C TO COUNT THE TOTAL NUMBER OF DUPLICATE ELEMENTS IN AN ARRAY.
//  EXAMPLE :-
//  INPUT THE NUMBER OF ELEMENTS TO BE STORED IN THE ARRAY :- 3
//  INPUT 3 ELEMENTS IN THE ARRAY :
//  ELEMENT :- 0 : 5
//  ELEMENT :- 1 : 1
//  ELEMENT :- 2 : 1
//  EXPECTED OUTPUT :-
//  TOTAL NUMBER OF DUPLICATE ELEMENTS FOUND IN THE ARRAY IS :- 1

#include <stdio.h>
int main()
{
    int a, c, count = 0;
    printf("INPUT THE NUMBER OF ELEMENTS TO BE STORED IN THE ARRAY :-\n");
    scanf("%d", &a);
    int b[a];
    printf("INPUT %d ELEMENTS IN THE ARRAY :-\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("ELEMENT :- %d : ", i);
        scanf("%d", &b[i]);
        printf("\n");
    }
    printf("EXPECTED OUTPUT :-\n");
    for (int i = 0; i < a; i++)
    {
        for (c = i + 1; c < a; c++)
        {
            if (b[i] == c)
            {
                count++;
            }
        }
    }
    printf("TOTAL NUMBER OF DUPLICATE ELEMENTS FOUND IN THE ARRAY IS :- %d", count);
    return 0;
}