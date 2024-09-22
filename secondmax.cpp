#include<iostream>
using namespace std;
int secondmax(int arr[], int size)
{
    int second=INT8_MIN;
    int ans=INT8_MIN;
   // int temp[10];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
            
        }
         
    }
    cout<<ans<<"\n";
    
    for(int i=0; i<size; i++)
    {
    if(arr[i] != ans );
    {
        ans = max(ans,arr[i]);
        second = ans;
    }
    }
    cout<<second;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    secondmax(arr, 5);
}