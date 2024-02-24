#include<stdio.h>
int main()
{
        char str[26];
    char *ptr=&str[26]; 
    //int i=0;
    /*while(*ptr!='\0'){
    //printf("Enter the elements required in the string: \n");
    scanf("%c",&*ptr);
    ptr++;
    i++;
    }*/
    for(int i=0;i<=7;i++)
    {
            printf("elements in the string:\n");
            scanf("%s",&str[i]);
    }
    int count_v=0;
    int count_c=0;
    for(int j=0;j<=7;j++)
    {
        if(*ptr=='a'||'e'||'i'||'o'||'u')
        {
            count_v++;
        }
        else if(*ptr!='a'||'e'||'i'||'o'||'u')
        {
            count_c++;
        } 

    }
     printf("no.of vowels in the entered string is:%d\n",count_v);
                printf("no.of consonants in the entered string is:%d\n",count_c);

    return 0;
}