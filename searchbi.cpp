#include<iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    int start=0;
    int end=n-1;
    int mid;
    int index=5;
    while(start<=end)
    {
       
        if(arr[mid]==key)
        {
            index= mid;
            break;
        }
        else if(arr[mid]>key)
        {
            index=mid;
            end=mid-1;
        }
        else{
         
            start=mid+1;
        }
         mid=(start+end)/2;
    }
    return index;
}
int main()
{
    int arr[5]={2,5,9,7,3};
   // int n;
    //cin>>n;
    int index=search(arr,5,5);
    cout<<index;
}