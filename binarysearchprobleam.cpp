#include<iostream>
using namespace std;
int binary(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
      while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
              end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end/2);
    }
    return -1;
}
int main()
{
    int arr[5]={1,5,8,9,0};
    int n;
    cin>>n;
   cout<<binary(arr,n,5);
}