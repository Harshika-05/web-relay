#include<stdio.h>
int main()
{
    int i,n;
    int game[10];
    for(i=0;i<=7;i++)
    {
        printf("Enter the number of sports and games won by a college:\n");
        scanf("%d",&n);
        n=game[i];
        if(n>=5)
        {
            printf("you won the Champion of champions trophy!\n");
        }
    }
    return 0;
}  