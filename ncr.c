#include<stdio.h>
int ncr(int n)
{
   int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,i,fact;
    printf("enter n:\n");
    scanf("%d",&n);
    printf("%d",ncr(n));
    return 0;
}