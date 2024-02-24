#include<stdio.h>
int main()
{
    int i,a,b,c,d,e,f,g,h,s;
    printf("Enter the 5 digit number:\n");
    scanf("%d",&a);
    i=a/10000;
    b=a%10000;
    c=b/1000;
    d=b%1000;
    e=d/100;
    f=d%100;
    g=f/10;
    h=f%10;
    s=h*10000+g*1000+e*100+c*10+i;
    printf("The reversed number is:%d\n",s);
    if(a==s)
    {
        printf("The original and reversed number are equal.\n");
    }
    else
    {
        printf("The original and the reversed number is not equal.\n");
    }
    return 0;

}