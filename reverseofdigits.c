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
    printf("The sum of digits in the entered 5 digit number is:%d\n",s);
    return 0;

}