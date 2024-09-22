#include<iostream>
using namespace std;
int main()
{
    // variables ke liye heap memory me allocation
    int *ptr= new int ;
    *ptr=10;
    cout<<*ptr;// print the value of pointer
    cout<<endl<<ptr; //print the address of pointer
   // store the float type value in heap MEMORY
    float *ptr1 = new float ;
    *ptr1 =3.1;
    cout<<endl<<*ptr1<<endl;; //print the value of pointer
    // store the array type value in heap MEMORY
    int *p = new int[5];
    // we can also take the input from user in  the heap MEMORY
    int n;
    cin>>n;
    int *q = new int[n];
    // insert value
    for(int i=0; i<n; i++)
    {
        cin>>q[i];
    }
    // print the array
    for(int i=0; i<n; i++)
    {
        cout<<q[i]<<" ";
    }
   // free the array
    delete[] q;
    // free the float type value
    delete ptr1;
    // free the integer type value
    delete ptr;
    return 0;
    
}