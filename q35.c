// my code-
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x:\n");
    scanf("%d",&x);
    printf("Enter y:\n");
    scanf("%d",&y);
    if(x!=0 && y==0)
    {
        printf("The point lies on x-axis.\n");
    }
    else if(y!=0 && x==0)
    {
        printf("The point lies on y-axis.\n");
    }
    if(y==0 && x==0)
    {
        printf("The point lies on origin.\n");
    }
    return 0;
}