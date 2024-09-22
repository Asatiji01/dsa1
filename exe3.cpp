#include<iostream>
using namespace std;
// it is example of method calss function inside wala
/*class employee{  
    public:
    void mywork()
    {
        cout<<"namste sabhi ko";
    }
};
int main()
{
    employee t1;
    t1.mywork();
    }
    */
   // it is example of method fuction outside wala
  /*class employee{
             public:
             void mywork();   // in outside me defince fuction in class
   };
    
    void employee :: mywork()
    {
        cout<<"namste sabhi ko";
    }
    // and we use this type to define
    int main()
    {
        employee t2;
        t2.mywork();
        return 0;
    }*/
    // parameter example
    class employee{
          public:
          int work (int load);
          
    };
    employee :: work(int load)
    {
        return load;
    }
    int main()
    {
        employee t3;
        cout<<t3.work(200);
        return 0;
    }