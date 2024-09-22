#include <iostream>
using namespace std;
int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            
            end = mid - 1;
        }
        else
        {
            
            start = mid + 1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {1, 5, 6, 4, 7, 8};
    int odd[5] = {2, 0, 4, 12, 3};
    int index = search(even, 6, 7);
    cout<<index;
    return 0;
}