#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    printf("Enter c:\n");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("a is largest.\n");
    }
    if(b>a && b>c)
    {
        printf("b is largest.\n");
    }
    if(c>a && c>b)
    {
        printf("c is largest.\n");
    }
    return 0;
}