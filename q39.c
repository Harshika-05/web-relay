#include<stdio.h>
int main()
{
    int h,t,i,ii,iii;
    float c;
    printf("Enter the hardness of the carbon:\n");
    scanf("%d",&h);
     printf("Enter the carbon content of the carbon:\n");
    scanf("%f",&c);
     printf("Enter the tensile strength of the carbon:\n");
    scanf("%d",&t);
 i=h>50;
 ii=c<0.7;
 iii=t>5600;
 if(i && ii && iii)
 {
    printf("grade is 10.\n");
 }  
 else if(i && ii)
  {
    printf("grade is 9.\n");
 } 
 else if(ii && iii)
  {
    printf("grade is 8.\n");
 } 
 else if(i && iii)
  {
    printf("grade is 7.\n");
 } 
 else if(i || ii || iii)
  {
    printf("grade is 6.\n");
 } 
 else
 {
    printf("grade is 5.\n");
 }
    return 0;
}