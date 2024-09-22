#include<iostream>
using namespace std;
class customer{
                 private:
                 string name;
                 int accno;
                 int bal;

           public:
           customer(string a, int b, int c)
           {
            name=a;
            accno=b;
            bal=c;

           }      
};
int main()
{
    int totalcus=0;
    customer A1("rohit",13234,1000);
    customer A2("prince",12345,10);
    


}