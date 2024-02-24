#include<stdio.h>
#include<math.h>
int main()
{
    int empl=1,overhrs,workhrs;
    float pay;
    while(empl<=10)
    {
        printf("Enter the working hours of employee no.%d: \n", empl);
        scanf("%d",&workhrs);
        if(workhrs>40)
        {
            overhrs=workhrs-40;
            pay=overhrs*12.00;
            printf("Employee no.%d overtime pay is:%f\n",empl,pay);


        }
        else
        {
            printf("You have to work more than 40 hrs. to overtime pay.\n");
        }
        empl++;
    }
}
