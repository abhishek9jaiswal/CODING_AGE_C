// WRITE A PROGRAM TO TAKE MARKS OF 10 STUDENTS AND FIND THE AVERAGE MARKS , MAXIMUM MARKS AND MINIMUM MARKS.

#include<stdio.h>
int main ()
{
    int a;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&a);
    int b;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&b);
    int c;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&c);
    int d;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&d);
    int e;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&e);
    int f;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&f);
    int g;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&g);
    int h;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&h);
    int i;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&i);
    int j;
    printf("ENTER YOUR MARKS :-\n");
    scanf("%d",&j);
    float k = (a+b+c+d+e+f+g+h+i+j) / 10;
    printf("THE AVERAGE MARKS IS %.3f\n",k);
    if (a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j) 
    {
        printf("THE MAXIMUM NUMBER IS %d\n\n",a);
    }
    else if (b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",b);
    }
    else if (c>a && c>b && c>d && c>e && c>f && c>g && c>h && c>i && c>j)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",c);
    }
    else if (d>a && d>b && d>c && d>e && d>f && d>g && d>h && d>i && d>j)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",d);
    }
    else if (e>a && e>b && e>c && e>d && e>f && e>g && e>h && e>i && e>j)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",e);
    }
    else if (f>a && f>b && f>c && f>d && f>e && f>g && f>h && f>i && f>j)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",f);
    }
    else if (g>a && g>b && g>c && g>d && g>e && g>f && g>h && g>i && g>j)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",g);
    }
    else if (h>a && h>b && h>c && h>d && h>e && h>f && h>g && h>i && h>j)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",h);
    }
    else if (i>a && i>b && i>c && i>d && i>e && i>f && i>g && i>h && i>i)
    {
        printf("THE MAXIMUM NUMBER IS %d\n",i);
    }
    else
    {
        printf("THE MAXIMUM NUMBER IS %d\n",j);
    }
    if (a<b && a<c && a<d && a<e && a<f && a<g && a<h && a<i && a<j) 
    {
        printf("THE MINIMUM NUMBER IS %d\n",a);
    }
    else if (b<a && b<c && b<d && b<e && b<f && b<g && b<h && b<i && b<j)
    {
        printf("THE MINIMUM NUMBER IS %d\n",b);
    }
    else if (c<a && c<b && c<d && c<e && c<f && c<g && c<h && c<i && c<j)
    {
        printf("THE MINIMUM NUMBER IS %d\n",c);
    }
    else if (d<a && d<b && d<c && d<e && d<f && d<g && d<h && d<i && d<j)
    {
        printf("THE MINIMUM NUMBER IS %d\n",d);
    }
    else if (e<a && e<b && e<c && e<d && e<f && e<g && e<h && e<i && e<j)
    {
        printf("THE MINIMUM NUMBER IS %d\n",e);
    }
    else if (f<a && f<b && f<c && f<d && f<e && f<g && f<h && f<i && f<j)
    {
        printf("THE MINIMUM NUMBER IS %d\n",f);
    }
    else if (g<a && g<b && g<c && g<d && g<e && g<f && g<h && g<i && g<j)
    {
        printf("THE MINIMUM NUMBER IS %d\n",g);
    }
    else if (h<a && h<b && h<c && h<d && h<e && h<f && h<g && h<i && h<j)
    {
        printf("THE MINIMUM NUMBER IS %d\n",h);
    }
    else if (i<a && i<b && i<c && i<d && i<e && i<f && i<g && i<h && i<i)
    {
        printf("THE MINIMUM NUMBER IS %d\n",i);
    }
    else
    {
        printf("THE MINIMUM NUMBER IS %d\n",j);
    }
    return 0;
}