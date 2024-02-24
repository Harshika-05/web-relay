#include<stdio.h>
int main()
{
    int r,s,a;
    printf("The age of ram is:\n");
    scanf("%d",&r);
    printf("The age of shyam is:\n");
    scanf("%d",&s);
    printf("The age of Ajay is:\n");
    scanf("%d",&a);
    if(r<s && r<a)
    {
        printf("Ram is youngest!\n");
    }
    if(s<r && s<a)
    {
        printf("Shyam is youngest!\n");
    }
    if(a<s && a<r)
    {
        printf("Ajay is youngest!\n");
    }
    return 0;
}