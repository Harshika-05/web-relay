#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("now a is:%d and b is:%d\n",a,b);
    return 0;
}