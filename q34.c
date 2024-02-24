#include<stdio.h>
#include<math.h>
int main()
{
    double centX,centY,rad;
    printf("Enter center coordinates (x,y):\n");
    scanf("%lf %lf",&centX,&centY);
    printf("Enter the radius\n");
    scanf("%lf",&rad);
    double x,y;
    printf("Enter the other coordinates (x,y):\n");
    scanf("%lf %lf",&x,&y);
    double distance;
    distance=sqrt(pow(centX-x,2)+pow(centY-y,2));
if(distance==rad)
{
    printf("The point is on the circle.\n");
}
else if(distance<rad)
{
    printf("The point lies inside the circle.\n");
}
if(distance>rad)
{
    printf("The point lies outside the cicle.\n");
}
return 0;
}