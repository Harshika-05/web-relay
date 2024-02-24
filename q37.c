#include<stdio.h>
#include<conio.h>
int main()
{
    char n;
    printf("Enter any character:\n");
    scanf("%c",&n);
    printf("ASCII value of entered character is:%d\n",n);
    if(n>=65 && n<=90)
{
    printf("Entered character is Capital case letter.\n");
}
else if(n>=97 && n<=122)
{
    printf("Entered character is small case letter.\n");
}
else if(n>=48 && n<=57)
{
    printf("Entered character is number.\n");
}
else if((n>=0 && n<=47)||(n>=58 && n<=64)|| (n>=91 && n<=96) || (n>=123 && n<=127))
{
    printf("Entered character is special symbol.\n");
}

    return 0;
}