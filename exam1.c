#include <stdio.h>
int main()
{
    typedef struct cricketer
    {
        int ntm;
        int age;
        char name[20];
        float avgr;
    }cricketer;
    cricketer arr[50];
    for(int i=0;i<=1;i++)
    {
        printf("Name:\n");
        scanf("%s",&arr[i].name);
        printf("Age: \n");
        scanf("%d",&arr[i].age);
        printf("average runs: \n");
        scanf("%f",&arr[i].avgr);
        printf("No. of test matches:\n");
        scanf("%d",&arr[i].ntm);
    }
    if(arr[0].avgr>arr[1].avgr){
for(int j=0;j<=1;j++)
{
printf("Name: %s\n",arr[j].name);
printf("AGE: %d\n",arr[j].age);
printf("Average runs: %f",arr[j].avgr);
printf("No. of test matches: %d\n",arr[j].ntm);
}
    }
    else 
for(int k=1;k>=0;k--)
{
    printf("Name: %s\n",arr[k].name);
printf("AGE: %d\n",arr[k].age);
printf("Average runs: %f",arr[k].avgr);
printf("No. of test matches: %d\n",arr[k].ntm);
}
    return 0;
}
