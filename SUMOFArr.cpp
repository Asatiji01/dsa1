#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum+=arr[i];

    }
    cout<<sum<<endl;
    int max=arr[0];
    for(int i=0; i<size; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    
    }
    cout<<max<<endl;
    int key=4;
    for(int i=0; i<size; i++)
            {
                
                  if(arr[i]==key)
                  {
                    cout<<"task done"<<arr[i];
                  }                                      

                }
            }
