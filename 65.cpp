#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int n,m;
    cin>>m>>n;
    int arr[m+1][n+1];
    int result[m+1][n+1];
    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    result[0][0] = 0;
    for(int i = 1;i<=m;i++)
    {
        result[i][0] = 0;
        for(int j = 1;j<=n;j++)
        {
            result[0][j] = 0;
            result[i][j] = result[i-1][j] + result[i][j-1] - result[i-1][j-1] + arr[i][j];
        }
    }
    for(int i = 1;i<=m;i++)
    {
        for(int j = 1;j<=n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

}
