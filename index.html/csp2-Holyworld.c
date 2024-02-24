#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    int arr[n];
    int k;
    printf("no. of elements : \n");
    scanf("%d", &n);
    printf("value of k : \n");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        printf("enter elements in array : \n");
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        printf("\n %d \n", arr[j]);
    }
    for (int p = 0; p < (n - 1); p++)
    {
        for (int m = p + 1; m < (n); m++)
        {
            if (arr[m] < arr[p])
            {
                int t = arr[p];
                arr[p] = arr[m];
                arr[m] = t;
            }
        }
    }
    for (int z = 0; z < n; z++)
    {
        printf(" %d ", arr[z]);
    }
    printf("\nThe Kth smallest value in the array is : %d\n", arr[k - 1]);
    return 0;
}
