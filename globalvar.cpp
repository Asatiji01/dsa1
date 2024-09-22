#include<iostream>
using namespace std;
int p=5;
void print()
{
    cout<<p<<endl;;
}
void sum()
{
    int p=7;
    cout<<p<<endl;
    cout<<::p;// to print global variable if local variable also precent in fuction
}
int main()
{
    cout<<p<<endl;
    print();
    sum();

}