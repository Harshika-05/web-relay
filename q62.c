#include<stdio.h>
int main()
{
 int r,m,c,i,j;
printf("Enter the number of rows in the terminal:\n");
scanf("%d",&r);
printf("Enter the number of columns in the terminal:\n");
scanf("%d",&c);
for(i=1;i<=r;i++)
{
    m=1;
    printf("%c\n",m);
    for(j=2;j<=c;j++)
    {
        printf("%c",m);
    }

}
    return 0;
}