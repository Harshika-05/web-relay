#include<stdio.h>
int main()
{
    int i,j,c,d,e;
    printf("Enter any digit i:\n");
    scanf("%d",&i);
    printf("Enter any digit j:\n");
    scanf("%d",&j);
    c=i%j;
    d=j-c;
    e=i+d;
    printf("the rounded off digit is:%d\n",e);
    return 0;
}