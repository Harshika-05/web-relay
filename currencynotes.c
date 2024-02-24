#include<stdio.h>
int main()
{
    int a,b,c,d,f,g,e;
    printf("The amount to be withdrawn in hundreds:\n");
    scanf("%d",&a);
    b=10;
    c=50;
    d=100;
    if(a<100||a>999)
    {
printf("INVALID AMOUNT!!");
    }
    else
    {
        e=a/b;
        f=a/c;
        g=a/d;
        printf("Number of notes of 10rs.:%d\n",e);
        printf("Number of notes of 50rs.:%d\n",f);
        printf("Number of notes of 100rs.:%d\n",g);
    }
return 0;
}