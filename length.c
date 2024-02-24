#include<stdio.h>
int main()
{
    float l,b,r;
    printf("The length of the rectangle:\n");
    scanf("%f",&l);
    printf("The bredth of the rectangle:\n");
    scanf("%f",&b);
    printf("The radius of the circle is:\n");
    scanf("%f",&r);
    printf("The area of the rectangle:%f\n",l*b);
    printf("The perimeter of the rectangle is:%f\n", 2*(l+b));
    printf("The circumference of circle:%f\n",2*3.14*r);
    printf("The area of the circle is:%f\n", 3.14*r*r);
    return 0;
}