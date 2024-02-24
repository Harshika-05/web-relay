#include<stdio.h>
int main()
{
float d;
printf("The distance between kota to jaipur(in km) is:");
scanf("%f",&d);
printf("This distance in meters:%fm\n",d*1000);
printf("This distance in feets:%ffeets\n",d*3280);
printf("This distance in inches:%finches\n",d*10.079);
printf("This distance in centimeters:%fcm\n",d*100000);
return 0;
}