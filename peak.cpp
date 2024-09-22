#include<iostream>
using namespace std;
int peak(int arr[], int n)
{
    int start=0, end=n-1,mid, ans=0;
    while(start<=end)
    {
        mid =start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ans= mid;
        }
        else if (arr[mid]>arr[mid-1])
        {
            start =mid+1;
        }
        else
        end =mid-1;
    }
    return ans;
}
int main()
{
     int arr[6]={5,9,8,3,0,1};
     cout<<peak(arr,6);
}