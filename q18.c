#include<stdio.h>
int main()
{
    // 01/01/92 to 31/05/92 (1992=leap yr) weeks and days 
int w,rd,a=1,b=31,m1=1,m2=5,y2=1992,y1=1992,c;
c=(b-a)+30*(m2-m1)+365*(y2-y1);
w=c/7;
rd=c%7;
// the no. of days 150 days
printf("there are %d weeks and %d days between given dates\n",w,rd);
return 0;
}