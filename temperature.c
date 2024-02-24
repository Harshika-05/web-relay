#include <stdio.h>
int main()
{
    float t;
    printf("Temperature of a city in degree farenheit:\n");
    scanf("%f",&t);
    printf("Temperature of city in degree centigrades:%f\n",(t-32)*5/9);
    return 0; 
}