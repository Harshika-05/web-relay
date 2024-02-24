//only else statement showing.
/*string compare krna tha isme
#include<stdio.h>
int main()
{
    int a;
    char status[10]="excellent",livein[8]="city",sex[9]="male";
    printf("Enter the status of health(excellent/poor):\n");
    scanf("%s",&status);
    printf("Enter where does the person lives(city/village):\n");
    scanf("%s",&livein);
    printf("Enter the sex of the person(male/female/others):\n");
    scanf("%s",&sex);
    printf("Enter the age of the person:\n");
    scanf("%d",&a);
    
if((status[10]=="excellent") && (a>=25 && a<=35) && (livein[8]=="city") && (sex[9]=="male"))
{
    printf("The premium of this person is:Rs.4 per thousand and his policy amount cannot exceed Rs.2 lakhs.\n");
}
else if((status=="excellent") && (a>=25 && a<=35) && (livein=="city") && (sex=="female"))
{
    printf("The premium of this person is:Rs.3 per thousand and his policy amount cannot exceed Rs.1 lakhs.\n");
}
else if((status=="poor") && (a>=25 && a<=35) && (livein=="village") && (sex=="male"))
{
    printf("The premium of this person is:Rs.6 per thousand and his policy amount cannot exceed Rs.10,000.\n");
}
else
{
    printf("The person is not insured.\n");
}
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a;
    char status[10]="excellent",livein[8]="city",sex[9]="male";
    printf("Enter the status of health(excellent/poor):\n");
    scanf("%s",&status);
    printf("Enter where does the person lives(city/village):\n");
    scanf("%s",&livein);
    printf("Enter the sex of the person(male/female/others):\n");
    scanf("%s",&sex);
    printf("Enter the age of the person:\n");
    scanf("%d",&a);

if((strcmp(status,"excellent")==0) && (a>=25 && a<=35) && (strcmp(livein,"city")==0) && (strcmp(sex,"male")==0))
{
    printf("The premium of this person is:Rs.4 per thousand and his policy amount cannot exceed Rs.2 lakhs.\n");
}
else if((strcmp(status,"excellent")==0) && (a>=25 && a<=35) && (strcmp(livein,"city")==0) && (strcmp(sex,"female")==0))
{
    printf("The premium of this person is:Rs.3 per thousand and his policy amount cannot exceed Rs.1 lakhs.\n");
}
else if((strcmp(status,"poor")==0) && (a>=25 && a<=35) && (strcmp(livein,"village")==0) && (strcmp(sex,"male")==0))
{
    printf("The premium of this person is:Rs.6 per thousand and his policy amount cannot exceed Rs.10,000.\n");
}
else
{
    printf("The person is not insured.\n");
}
    return 0;
}
