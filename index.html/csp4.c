#include<stdio.h>
int main()
{
     int n;
    printf("no. of elements: \n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid number of elements. Exiting...\n");
        return 0;
    }
    if (n == 1)
    {
        printf("Enter more than 1 value.\n");
    }
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        printf("Enter elements in array : \n");
        scanf("%d", &arr[i]);
    }
    for( int j = 0,i=n-1; j < n , i >= 0; j++, i--)
    {
        int t = arr[j];
        arr[j] = arr[i-1];
        arr[i-1] = t;
       
    }
    for( int k = 0 ; k<n ; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}