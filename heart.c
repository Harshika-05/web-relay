//fill the screen with hearts
#include<stdio.h>
int main()
{
    char ch=3;
    int l,b;
    printf("enter the length of the terminal: \n");
    scanf("%d",&l);
    printf("enter the bredth of the terminal: \n");
    scanf("%d",&b);
    for(int i=1;i<=l;i++)
    {
        printf("%c\n",ch);
        for(int j=1;j<=b;j++)
        {
            printf("%c",ch);
        }
    }

    return 0;
}