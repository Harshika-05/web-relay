#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number a:\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The entered number is even.\n");
    }
    else
    {
        printf("The entered number is odd.\n");

    }
    return 0;
}