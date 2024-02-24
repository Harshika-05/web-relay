#include<bits/stdc++.h>// in selection sort - we first find the minimum digit then we swap it to the first element in array.
using namespace std;
int main()
{
    int arr[6] = {23 , 12 , 45 , 8 , 15 , 19};
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<6;j++)
    {
        if(arr[j]<arr[i])
        {
            int t = arr[j];
            arr[j] = arr[i];
            arr[i]=t;
        }
    }
}
for(int k=0; k<6; k++)
{
    cout<<" "<<arr[k];
}
return 0;
}