#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first side:\n");
    scanf("%d",&a);
     printf("Enter the second side:\n");
       scanf("%d",&b);
      printf("Enter the third side:\n");
        scanf("%d",&c);
        if(a>b && a>c)
        {
            if(a==b+c)
            {
                printf("triangle is valid.\n");
            }
             else
        {
            printf("Triangle is not valid.\n");
        }
        }
        else if(b>a && b>c)
        {
            if(b==a+c)
            {
                printf("triangle is valid.\n");
            }
             else
        {
            printf("Triangle is not valid.\n");
        }
        }
        else if(c>b && c>a)
        {
            if(c==b+a)
            {
                printf("triangle is valid.\n");
            }
             else
        {
            printf("Triangle is not valid.\n");
        }
        }
       return 0;
     

}