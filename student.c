#include<stdio.h>
int main()
{
    float p,c,m,e,i;
    printf("Marks in Physics:\n");
    scanf("%f",&p);
    printf("Marks in chemistry:");
    scanf("%f",&c);
    printf("Marks in maths:\n");
    scanf("%f",&m);
    printf("Marks in english:\n");
    scanf("%f",&e);
    printf("Marks in ip:\n");
    scanf("%f",&i);
    printf("The aggregate marks of the student is:%f\n",p+c+m+e+i);
    printf("The percentage of marks:%f %\n",(p+c+m+e+i)/5);
    return 0;
}