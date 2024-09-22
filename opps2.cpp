#include<iostream>
using namespace std;
class Hero
{
    private:
    int health;

    public:
    char level;

    void print() {
        cout<<level <<endl;
    }

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health=h;
    }
    void setlevel(char ch)
    {
        level=ch;
    }
};

int main()
{
    Hero ramesh;
    
    ramesh.sethealth(70);
    ramesh.setlevel('a');
cout<<"ramesh health is : "<<ramesh.gethealth() <<endl;

cout<<"ramesh level is : "<<ramesh.getlevel() <<endl;
}
