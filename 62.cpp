#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int max;
    cin>>max;
    for(int i = 2;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
            max = arr[i];
    }
    cout<<max<<endl;
    for(int i = 1;i<=n;i++)
    {
        if(arr[i]==max) cout<<i<<" ";
    }
}
