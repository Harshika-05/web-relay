#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter side a:\n");
    scanf("%d",&a);
    printf("Enter side b:\n");
    scanf("%d",&b);
    printf("Enter side c:\n");
    scanf("%d",&c);
    if(a!=b && a!=c && b!=c)
    {
        printf("entered sides proves it a scalene triangle.\n");
    }
     else if((a==b && b!=c && a!=c) || (b==c && a!=b && a!=c) || (a==c && a!=b && b!=c))
    {
        printf("entered sides proves it to be an isoceles triangle.\n");
    }
   else if(a==b && b==c && a==c)
    {
        printf("entered sides proves it to be an equilateral triangle.\n");
    }
if(a>b && a>c && (pow(a,2)==pow(b,2)+pow(c,2)))
{
    printf("Right angle triangle.\n");
}
else if(b>a && b>c && (pow(b,2)==pow(a,2)+pow(c,2)))
{
    printf("Right angle triangle.\n");
}
else if(c>b && c>a && (pow(c,2)==pow(b,2)+pow(a,2)))
{
    printf("Right angle triangle.\n");
}
    return 0;
}