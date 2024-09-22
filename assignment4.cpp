#include <iostream>
using namespace std;
int reverse(int arr[], int size) // create a fuction for reverse of a array
{
    int start = 0;  // create a variable start and end 
   int end = size- 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]); // use swap to swap the element of array
            start++;
        end--;
    }
}
void print(int arr[], int size) // declare a print fuction to print the array
{
    for (int i = 0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main()

{
    int arreven[6] = {1, 2, 5, 8, 9, 66}; // create two array one is even and other is odd array 
    int arrodd[5] = {0, 55, 64, 6, 11};
    reverse(arreven, 6);     // call the fuction
    reverse(arrodd, 5);
    print(arreven, 6);
    print(arrodd, 5);
}