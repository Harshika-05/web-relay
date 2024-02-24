#include <bits/stdc++.h>
using namespace std;
int getmax(int arr[], int num)
{
    int max = 0;
    for (int i = 1; i <= num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << "max value: " << getmax(arr, 3);
    return 0;
}
