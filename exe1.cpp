#include <iostream>
using namespace std;
class student
{
public:
    int sal;
    string name;
    int roll;
};
int main()
{
    student data;
    data.sal=1000;
    data.name = "prince";
    data.roll = 01;
    cout<<data.name<<endl ;
    cout<<data.sal<<endl;
    cout<<data.roll;

}