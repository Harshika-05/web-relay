#include<stdio.h>
int main()
{
    int a,b,c,s;
    printf("Enter the four digit number:\n");
    scanf("%d",&a);
    if((a<1000)||(a>9999))
    {
        printf("INVALID NUMBER!\n");
    }
    else
    {
    b=a/1000;
    c=a%10;
    s=b+c;
    printf("The sum of 1st and last digit is:%d\n",s);
    }
    return 0;
}