#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,m1,m2,m3;
    printf("enter x1:\n");
    scanf("%d",&x1);
  printf("enter x2:\n");
  scanf("%d",&x2);
     printf("enter x3:\n");
     scanf("%d",&x3);
       printf("enter y1:\n");
       scanf("%d",&y1);
         printf("enter y2:\n");
         scanf("%d",&y2);
           printf("enter y3:\n");
           scanf("%d",&y3);
           m1=(y2-y1)/(x2-x1);
           m2=(y3-y2)/(x3-x2);
           m3=(y3-y1)/(x3-x1);
           if(m1==m2 && m2==m3 && m3==m1)
           {
 printf ("All three points on the same straight line i.e. y-%d=%d(x-%d)\n",y1,m1,x1);
           }
           else
           {
            printf("these points are not on same straight line.\n");
           }
             return 0;
  
}