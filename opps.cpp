
#include<iostream>
using namespace std;
class hero{                                     // creation of class
    public:  // acesss modifier
    int health;
    
    char level;


};
int main()
{
    hero ramesh; // creation of object

    ramesh.health=70;
    ramesh.level='A';

    cout<<"health is "<<ramesh.health<<endl;
    cout<<"level is "<<ramesh.level<<endl;
    
    return 0;
    
}