#include<iostream>
using namespace std;
/*int reverse(int arr[], int size)
{
    int temp[10];
    int start=0;
    int end=size-1;
    for(int i=0; i<size; i++)
    {
            start=arr[end];
            temp[i]=start;
            end--;
           cout<<temp[i]<<"  ";
    }
}
   
int main()
{
    int arr[10];
    int size;
    cin>>size;
       for(int i=0; i<size; i++)
       {
              cin>>arr[i];
       }   
    reverse(arr , size);
    return 0;
}*/
 void reverse(int arr[], int n)
{
    int start=0;
    int end= n-1;
    while(start<=end)
    {
         swap(arr[start], arr[end]);
         start++;
         end--;
    }

}
void print (int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}



int main()
{
    int arr[6]={1,5,7,9,-8,4};
    int brr[5]={0,5,9,6,3};

    reverse(arr , 6);
    reverse(brr , 5);
    print(arr, 5);
    print(brr , 6);
}
   