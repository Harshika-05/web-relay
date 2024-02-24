#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"no. of rows reqired: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}