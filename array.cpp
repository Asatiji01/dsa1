#include<iostream>
using namespace std;
void print_arr(int arr[], int size)
{
    cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i];
    }
    cout<<endl<<"printing done"<<endl;
}
int main()
{
    int first[10]={2,7};
    print_arr(first,10);
    int second[10]={1};
    print_arr(second,10);
    
    return 0;
    
}