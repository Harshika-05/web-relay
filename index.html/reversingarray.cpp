/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=4;i>=0;i--)
{
    cout<<" "<<arr[i];
}
}*/
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
}