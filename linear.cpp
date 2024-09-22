#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << "enter the key : ";
    int key;
    cin >> key;
    bool found = (arr, 10, key);
    if (found)
    {
        cout << "key found" << endl;
    }
    else
    {
        cout << "not found";
    }
}