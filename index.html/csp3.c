#include <stdio.h>
int main()
{
    int n;
    printf("no. of elements: \n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid number of elements. Exciting...\n");
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
        if (arr[i] == 0 || 1 || 2)
        {
            continue;
        }
        else
        {
            printf("Enter valid numbers: ");
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < (n - 1); k++)
        {
            if (arr[k + 1] < arr[k])
            {
                int t = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = t;
            }
        }
    }
    for (int m = 0; m < n; m++)
    {
        printf("%d", arr[m]);
    }

    return 0;
}
