#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    a=80000;
    printf("total population:%d\n",a);
    b=a*0.52;
    printf("Number of mens in the town:%d\n",b);
    c=b*0.35;
    printf("Total number of literate mens in the town:%d\n",c);
    printf("Total illiterate mens:%d\n",b-c);
    d=a-b;
    printf("Number  of womens in the town:%d\n",d);
    e=d*0.65;
    printf("Total literate womens in the town:%d\n",e);
    printf("Total illiterate womens:%d\n",d-e);
    return 0;
}

