#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter the cost price of the product:\n");
    scanf("%d",&cp);
    printf("Enter the selling price of the product:\n");
    scanf("%d",&sp);
    if(sp>cp)
    {
        printf("Gained profit!\n");
        p=sp-cp;
        printf("Profit gained is:%d\n",p);

    }
    if(sp<cp)
    {
        printf("Loss incurred!\n");
        l=cp-sp;
        printf("Loss incurred is:%d\n", l);
    }
    return 0;

}