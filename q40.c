#include<stdio.h>
int main()
{
    float i,j,a,b,c,d;
    printf("Enter the number of days he/she is late to submit the book:\n");
    scanf("%f",&a);
    if(a<=5)
    {
        b=a*0.5;
        printf("your fine is:%frs.\n",b);
    }
    else if(a>=6 && a<=10)
 {
c=5*0.5+(a-5)*1;
printf("your fine is:%frs.\n",c);
 } 
 else if(a>10 && a<=30)
 {
    d=7.5+((a-10)*5);
    printf("your fine is:%frs.\n",d);
 }
 else if(a>30)
 {
    printf("Your membership is cancelled.\n");
 }
    return 0;
}