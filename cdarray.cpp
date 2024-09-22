#include<iostream>
using namespace std;
int main()
{
    int arr[5]={4,5,8,2,6};
    int ans=INT8_MAX;
    int key;
    cin>>key;
    for(int i=0; i<5; i++)
    {
         if(key==arr[i])
        {
            cout<<"key is found "<<"\n";
        }
            
        if(arr[i]<ans)
        {
            ans=arr[i];
        }

    }
   
    cout<<"min value is :"<<ans<<"\n";



    int arr1[5]={5,6,9,1,3};
    int ans1=INT8_MIN;
    
    for(int i=0; i<5; i++)
    {
       
        if(arr1[i]>ans1)
        {
            ans1=arr1[i];
        }
    }
        cout<<"max value is : "<<ans1<<endl;

    int arr2[5]={2,6,5,7,8};
    cout<<sizeof(arr2)/sizeof(arr2[0]);

}
