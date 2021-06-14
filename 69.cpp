#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size+1];
    for(int i = 1;i<=size;i++)
    {
        cin>>arr[i];
    }
    cout<<0<<" ";
    for(int i = 2;i<=size;i++)
    {
        int count = 0;
        for(int j=1;j<i;j++)
        {
            if(arr[j]>arr[i]) count++;
        }
        cout<<count<<" ";
    }
}
