#include<stdio.h>
int main()
{
    float a,b,c,e,d;
    printf("Total selling price of 15 items is:\n");
    scanf("%f",&a);
    d=a/15;
    printf("Total profit earned on 15 items is:\n");
    scanf("%f",&b);
    e=b/15;
    c=d-e;
    printf("The cost price of one item is:%f\n",c);
    return  0; 
}