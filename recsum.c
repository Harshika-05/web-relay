#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }

    int main()
    {
        int sum=0;
        for(int i=1;i<=5;i++)
            {
        sum=sum+fibo(i);
        printf("%d",sum);
        }
    }
    return 0;
}
