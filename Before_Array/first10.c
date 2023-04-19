#include <stdio.h>
int main()
{
    printf("PLEASE ENTER THE MARKS OF YOUR THREE SUBJECTS BELOW TO KNOW YOU ARE PASS OR FAIL :-\n");
    int physics;
    printf("ENTER YOUR PHYSICS MARKS :-\n");
    scanf("%d", &physics);
    int chemistry;
    printf("ENTER YOUR CHEMISTRY MARKS :-\n");
    scanf("%d", &chemistry);
    int maths;
    printf("ENTER YOUR MATHS MARKS :-\n");
    scanf("%d", &maths);
    int d = (physics + chemistry + maths);
    int e = d * 100 / 300;
    printf("YOUR PERCENTAGE IS %d\n", e);
    if (physics > 33 && chemistry > 33 && maths > 33 && e >= 40) 
    {
        printf("YOU ARE PASS.\n") ;
    }
    else
        printf("YOU ARE FAIL.\n");
    return 0;
}