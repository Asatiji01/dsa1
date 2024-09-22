#include<iostream>
using namespace std;
int missing(int arr[], int size)
{
    int sum=0;
   
    for(int i=0; i<size-1; i++)
    {
      sum +=arr[i];
    }
   int  ans =size*(size+1)/2;
    return ans-sum;
}
int main()
{
    int arr[5]={1,2,3,5,};
    cout<<missing(arr, 5);
}