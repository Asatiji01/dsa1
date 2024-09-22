#include<iostream>
using namespace std;
class student {
    private :
    int acc;
    int work;

    public:
    int marks;
    char grade;


/*void print()
    {
        cout<<marks<<endl;
        cout<<grade<<endl;
    }*/

//geter use
    int getacc()
    {
        return acc;

    }
    int getwork()
    {
        return work;
    }
   /* int getmarks()
    {
        return marks;
    }
    char getgrade()
    {
        return grade;
    }*/
   // use setter to take the input for private class:
        int setacc(int h)
    {
        acc=h;
    }
    
    int setwork(int g)
    {
         work=g;
    }
   /* int setmarks(int m)
    {
        marks=m;
    }
    char setgrade(char ch)
    {
        grade=ch;
    }*/

};
int main()
{
    student job;

    job.setacc(12);
    job.setwork(2);
   // job.setgrade('a');
    //job.setmarks(100);
    cout<<"acess is "<<job.getacc() <<endl;
    cout<<"work is "<<job.getwork() <<endl;
   // cout<<"mark is "<<job.getmarks() <<endl;
    //cout<<"grade is "<<job.getgrade() <<endl;
    
    job.marks =70;
    job.grade ='a';
    cout<<job.marks<<endl;
    cout<<job.grade;
}