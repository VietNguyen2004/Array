#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 1;i<=m;i++)
    {
        int L,R;
        cin>>L>>R;
        int sum= 0;
        for(int i = L;i<=R;i++)
        {
            sum+= arr[i];
        }
        cout<<sum<<endl;
    }
}
