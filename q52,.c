#include<stdio.h>
#include<math.h>
int main()
{
    int num,fact,n;
    printf("Enter the number:\n");
    scanf("%d",&num);
    n=num;
    fact=1;
    while(num>1)
    {
        fact=fact*num;
        num=num-1;
    }
    printf("The factorial value of %d is:%d",n,fact);

    return 0;
}