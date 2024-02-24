#include<stdio.h>
int main()
{
    int marks[100][6];
    for(int i=0;i<=99;i++)
    {
        for(int j=0;j<=5;j++)
        {
        printf("Enter the marks of Roll No.%d in CP: \n",i+1);
        scanf("%d",marks[j]);
        printf("Enter the marks of Roll No.%d in DD: \n",i+1);
        scanf("%d",marks[j]);
        printf("Enter the marks of Roll No.%d in CT: \n",i+1);
        scanf("%d",marks[j]);
        printf("Enter the marks of Roll No.%d in MATHS: \n",i+1);
        scanf("%d",marks[j]);
        printf("Enter the marks of Roll No.%d in HST: \n",i+1);
        scanf("%d",marks[j]);
        printf("Enter the marks of Roll No.%d in PHY: \n",i+1);
        scanf("%d",marks[j]);
        }
       
    }
    return 0;
}