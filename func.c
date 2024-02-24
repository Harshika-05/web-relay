#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,n,g,h,i,j,k,l,m;
    printf("enter a 5 digit number: ");
    scanf("%d",&n);
    a=n/10000;//1
    b=n%10000;
    c=b/1000;//2
    d=b%1000;
    e=d/100;//3
    f=e%100;
    g=f/10;//4
    h=g%10;//5
    if(a==4||c==4||e==4||g==4||h==4)
    {
            if(a==4)
            {
                a=5;
                j=a*10000+c*1000+e*100+g*10+h;
                printf("%d",h);
            }
    }
    


    return 0;

}