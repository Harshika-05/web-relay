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
    i=(a/10000)+1;
    b=a%10000;
    c=(b/1000)+1;
    d=b%1000;
    e=(d/100)+1;
    f=d%100;
    g=(f/10)+1;
    h=(f%10)+1;
    s=i*10000+c*1000+e*100+g*10+h;
    printf("The required number is:%d\n",s);
    }
    return 0;
}