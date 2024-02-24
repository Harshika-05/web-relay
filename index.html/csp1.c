#include <stdio.h>
#include <limits.h>

int getmax(int arr[], int n)
{
    long max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[], int n)
{
    long min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

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
    for (int i = 0; i < n; i++)
    {
        printf("Enter elements in array : \n");
        scanf("%d", &arr[i]);
    }
    printf("Maximum value in the array : \n");
    printf("%d \n", getmax(arr, n));
    printf("Minimum value in the array : \n");
    printf("%d \n", getmin(arr, n));
    return 0;
}
