#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {23 , 12 , 45 , 8 , 15 , 19};
        for(int j=0; j<6; j++){
        for( int i=0; i<5; i++)
        {
            if (arr[i]<arr[i+1])//if sorting in descending order then arr[i]<arr[i+1] otherwise arr[i]>arr[i+1]
            {
                int t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
        }
        for(int k=0; k<6 ; k++)
        {
            cout<<" "<<arr[k];
        }
        return 0;
    }
