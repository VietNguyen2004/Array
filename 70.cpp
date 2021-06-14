#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int k= size;
    int arr[size];
    int result[size];
    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
    bool check[size+1];
    for(int i = 1;i<=size;i++)
    {
        check[i] = true;
    }
    for(int i = size-1 ; i >= 0 ; i--)
    { 
        int n = k;
        if(arr[i]==0)
        {
            result[i] = k;
            k--;
            continue;
        }
        while(arr[i]>0)
        {
            if(check[n]){
                arr[i]--;
            }
            n--;
        }
        result[i] = n;
        check[n] = false;
    }
    for(int i =0;i<size;i++)
    {
        cout<<result[i]<<" ";
    }
}
