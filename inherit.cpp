#include<iostream>
using namespace std;
class human{
    public:
    int height ;
    int weight;
    int age;

    protected:
    int bal;

    public: 
  int  getage()
    {
        return this->age;
    }

    public:
    void nothing()
    {

    
    cout<<"good in color"<<endl;
    }

};
class male: public human{
    int nature;
    public:
    int getbal()
    {
        return this->bal;
        
    }
    
};
int main()
{
    male obj1;
    obj1.getage();
    obj1.nothing();
    obj1.height=10;
    cout<<obj1.height<<endl;
     cout<< obj1.getbal();

}
