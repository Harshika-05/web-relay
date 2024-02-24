#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    for(a=1;a<=500;a++)
    {
        if(a<10)
        {
            b=a*a*a;
        if(b==a)
        {
            printf("%d\n",b);
        }
        }
     else if(a>=10 && a<=99)
        {
            c=a/10;
            d=a%10;
            e=((c*c*c)+(d*d*d));
            if(e==a)
            {
                printf("%d\n",e);
            }
        }
     else if(a>=100 && a<=500)
        {
            f=a/100;
            g=a%100;
            h=g/10;
            i=g%10;
            j=((f*f*f)+(h*h*h)+(i*i*i));
            if(a==j)
            {
                printf("%d\n",j);
            }
        }
    }
    
    return 0;
}