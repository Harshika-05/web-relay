#include<stdio.h>
int main()
{
    float s;
    printf("Enter the basic salary of a person:\n");
    scanf("%f",&s);
    printf("The dearness allowance is:%f\n",s*0.4);
    printf("The rent allowance is:%f\n", s*0.2);
    printf("The gross salary is:%f\n", s-(s*0.4)-(s*0.2));
return 0;
}