#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout<<&x<<endl;
   int *ptr = &x;

   float y=4.5;
    float *ptr1=&y;
   cout<<ptr<<endl;

   cout<<ptr1<<endl;

   cout<<*ptr;
   

   return 0;
}