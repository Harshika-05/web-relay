#include<stdio.h>
int main()
{
    int array[5];
    for(int i=0;i<=4;i++){
        printf("enter the elements in array: \n");
        scanf("%d",&array[i]);
    }
    printf("%d",array);
    for(int j=4;j>=0;j--)
    {
        printf("%d",array[j]);
    }
    return 0;
}