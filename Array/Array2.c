// WRITE A PROGRAM TO TAKE INPUT FROM USER IN THE FORM OF 0 AND 1 AND SORT[ASCENDING & DESCENDING] THEM.

#include <stdio.h>
int main()
{
  int a;
  printf("INPUT THE NUMBER :-\n");
  scanf("%d", &a);
  int b[a];
  int i;
  int count = 0;
  for (i = 0; i < a; i++)
  {
    printf("ENTER THE NUMBER :-\n");
    scanf("%d", &b[i]);

    if (b[i] == 1 || b[i] == 0)
    {
      count = count + 1;
    }
    else
    {
      printf("INVALID INPUT.\n");
      a = a + 1;
    }
  }

  return 0;
}