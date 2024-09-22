#include<iostream>
#include<vector>
using namespace std;
int sum(int arr[], int target,int n, int ans[])
{    
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((arr[i]+arr[j])==target) 
            {
                ans[0]=arr[i];
                ans[1]=arr[j];
                
             }
             
              
        }
    }
    cout<<ans[0]<<" + "<<ans[1];
}
    
int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int target=17;
    int ans[2];
    cout<<sum(arr, target, n,ans);
    return 0;
}