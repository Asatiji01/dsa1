#include<iostream>
using namespace std;
int main()
{ 
    int size;
    cin>>size; // take input from user 
    int arr1[10]={1,2,5,11,20,45,9,6,98,0}; // declare the array 1
    int arr2[10]={2,4,8,7,20,45,9,78,21,3}; // declare the array 2

    for(int i=0; i<size; i++) 
    {     
       for(int j=0; j<size; j++) 
       {
        int temp=arr1[i];  // store the element of first array
        if(temp==arr2[j]) // check the element of first array with the second array 
        {
            cout<<temp<<endl;
        }
       }
            
    }
}