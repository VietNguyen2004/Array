#include<iostream>
using namespace std;
int max_in_Array(int*arr,int L,int R)
{
    int max = arr[L];
    for(int i =L+1; i<=R; i++)
    {
        if(arr[i]>max) max = arr[i];
    }   
    return max;
}
int main()
{
    int L,R;
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 1;i<=m;i++)
    {
        cin>>L>>R;
        cout<<max_in_Array(arr,L,R)<<endl;
    }
}
