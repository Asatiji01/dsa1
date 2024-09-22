#include<iostream>
using namespace std;

int rotate(int arr[] , int size, int k) // declare a function for rotate array
{
    int arr2[10];  // declare a second temp array to store the rotate value
for(int i=0; i<size; i++)
    {
    
        arr2[i]= arr[(size+k)%size]; // condition for rotation
                k++;
          cout<<arr2[i]<<"  ";                   
    }
    
}

int main()
{
    int arr[10];  // declare the array
    int size;   
    int k;   
    cin>>size>>k;  // take the size and how many index are shift 
     for(int i=0; i<size; i++)   // take input array element
    {
        cin>>arr[i];
    }
    rotate(arr,size,k); // call rotate function
    
    
}

