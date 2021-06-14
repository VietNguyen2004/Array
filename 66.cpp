#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m+1][n+1];
    for(int i = 1 ; i<=m ; i++)
    {
        for(int j = 1 ; j<=n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    //*********************************
    int q;
    cin>>q;
    for(int i =1 ; i<=q ; i++)
    {
        int sum = 0;
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        for (int a= r1 ; a<=r2 ; a++)
        {
            for(int b = c1 ; b<=c2 ; b++)
            {
                sum+= arr[a][b];
            }
        }
        cout<<sum<<endl;
    }
}
