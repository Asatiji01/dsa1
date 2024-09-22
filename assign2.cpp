// program to sort the array 
#include <iostream>
using namespace std;
// selection sort
int sort(int arr[], int n)   // create the sort function
{

  for(int i=0; i<n; i++)   // outer loop
  {
    int index=i;   // declare the index variable 
    for( int j=i+1; j<n; j++)   // inner loop
    {
        if (arr[j]<arr[index])   // check the condition
        {
            index=j;
        }
        swap(arr[i],arr[index]);   // swap the value of array

    }
  }
  for(int i=0; i<n ; i++) // print the sorted array in accesnding order
  {
    cout<<arr[i]<<"   ";
  }
}
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the no of elements : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, n);
}
// another method to sort the array is bubble sort
// that method is commented off because it is another method try any selection or bubble 

// bubble sort
/*int sort(int arr[], int n)
{
     
    for (int i = n-2; i >=0; i--)
    {
        for (int j = 0; j <= i; j++)
        {

            if (arr[j] > arr[j+ 1])
            {
                swap(arr[j], arr[j+ 1]);
               
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<swaped;
}
int main()
{
    int arr[1000];
    int n;
    cout << "enter the no of elements : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
} */