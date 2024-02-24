#include<stdio.h>
int main()
    {
    int i,a,b,c,d,e,f,g,h,s;
    printf("Enter the 5 digit number:\n");
    scanf("%d",&a);
    if(a<10000||a>99999)
    {
        printf("INVALID NUMBER!!\n");
    }
    else
    {
    i=(a/10000);
    b=a%10000;
    c=(b/1000);
    d=b%1000;
    e=(d/100);
    f=d%100;
    g=(f/10);
    h=(f%10);
    printf("The sum of first and last digit is:%d \n",h+i);
    }
    return 0;
    }
    