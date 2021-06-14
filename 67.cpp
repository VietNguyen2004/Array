#include<iostream>
#include<iomanip>
using namespace std;
float averange(int* arr, int start,int  end)
{
    int sum = 0;
    for(int i = start;i<=end;i++)
    {
        sum+= arr[i];
    }
    return (float) sum/ (end-start +1);
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    float max,min;
    cin>>arr[0]>>arr[1];
    max = min = float(arr[0]+arr[1])/2;
    for(int i = 2;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<size;i++)
    {
        for(int j = size-1;j>i;j--){
            if(averange(arr,i,j)>max) 
                max = averange(arr,i,j);
            if(averange(arr,i,j)<min)
                min = averange(arr,i,j);
        }
    }
    cout<<fixed<<setprecision(3);
    cout<<min<<" "<<max;
}
