#include<iostream>
using namespace std;
template <class t>
t sum (t a, t b )
{
    cout<<"total is : " <<a+b;
}
int main()
{
    sum(2,3);
    cout<<endl;
    sum(2.3, 3.5);
    
}