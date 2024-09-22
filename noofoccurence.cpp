#include<iostream>
using namespace std;
int occur(int arr[], int n, int key)
{
    int start=0;
    int end=n-1;
    int mid;
    int first=-1;
    int last=-1;
    int ans;
    // find first
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            first= mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
           start =mid+1;
         else{
            end =mid -1;
         }
    }

    // last occur
    start =0; end =n-1;
      while(start<=end)
    {
        if(arr[mid]==key)
        {
            last= mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
           start =mid+1;
         else{
            end =mid -1;
         }
    }
     ans =(last-first)+1;
     return ans;
}
int main()
{
    int arr[6]={1,2,2,2,3,4};
    cout<<occur(arr,6,2);

}