#include<stdio.h>
int main()
{
    int a,c,d;
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter d:");
    scanf("%d",&d);
    a=c;
    c=d;
    d=a;
    printf("The reversed numbers are %d and %d",c,d);
    return 0;
}