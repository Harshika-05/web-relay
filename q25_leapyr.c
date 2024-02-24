#include<stdio.h>
int main()
{
    int a;
    printf("Enter any year:\n");
    scanf("%d",&a);
    if(a%4==0 || a%400==0)
    {
        printf("The entered year is leap year!");
    }
    else
    {
        printf("The entered year is not a leap year!");
    }
    return 0;
}