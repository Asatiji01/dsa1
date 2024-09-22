#include<iostream>
using namespace std;
class car
{
      public:
      string brand;
      string model;
      int year;
      car(string n, string m, int p)
      {
        brand=n;
        model=m;
        year=p;
      }
};
int main()
{
    //car obj1;
   // car obj2;
    car obj1("bmw","x5",1990);
    car obj2("ford","mustang",2000);
    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;

}
