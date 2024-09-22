// program to remove duplicate elemnet in array 

#include <iostream>    
using namespace std;
int remove(int arr[], int n)  // declare function to remove the duplicate  element
{
    

    for (int i = 0; i < n; i++)   // declare outer loop
    {
        for (int j = i+1; j < n; j++)  //  declare inner loop
        { 
           if(arr[i]==arr[j])   //  condition  to check the duplicate element
           {
             for(int k=j; k<n; k++)
             {
                arr[k]=arr[k+1];   // remove duplicate elements
             }
             n--;
             j--;
           }
        }
    }
    for(int i=0; i<n; i++)   //  declare to print the array with removed elements
    {
        cout<<arr[i];
        
    }
}

int main()
{
    int arr[5] = {1, 2, 2, 4, 5};   //  create an array
    remove(arr, 5);  // call remove function
}