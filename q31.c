#include<stdio.h>
int main()
{
    int a;
    printf("Enter a:\n");
    scanf("%d",&a);
    int absoluteValue=abs(a);
    printf("absolute value of a is:%d\n",absoluteValue);
    return 0;
}
//my method:-
/*if(a<0)
    {
    a=-a;
    printf("absolute value of a is:%d\n",a);
    }
    else
    {
        printf("Absolute value of a is:%d\n",a);
    }*/