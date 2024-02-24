#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter length:\n");
    scanf("%d",&l);
    printf("Enter bredth:\n");
    scanf("%d",&b);
    p=2*(l+b);
    a=l*b;
    if(a>p)
    {
        printf("Area is greater than perimeter!\n");
    }
    else{
        printf("Perimeter is greater than area.\n");
    }
    return 0;

}