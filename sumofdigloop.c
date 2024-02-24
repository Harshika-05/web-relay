#include<stdio.h>
int main()
{
    int i,a,b,sum;
    printf("Enter the 5 digit number:\n");
    scanf("%d",&a);
    if(a<10000 && a>99999)
    {
        printf("Entered number is in valid!");
    }
    else {
    for(i=1;i<=5;i++)
    {
b=a/10000;
        sum+=a;
    }
    }
    sprintf("The sum of the digits is:%d\n",sum);
    return 0;
}