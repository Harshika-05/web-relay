#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("Enter b:\n");
    scanf("%d",&b);
    c=pow(a,b);
    printf("the value of one number raised to the power of another:%d\n",c);
    return 0;
}