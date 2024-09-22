#include<iostream>
using namespace std;
template <class t>
class demo
{
   private:

   t num1, t num2 ;

   public:
   demo (t n1 , t n2)
          {
            num1 = n1;
            num2 = n2;
          }
      void check()

      {
        if(num1>num2)
        {
             cout<<"the largest no. is : "<<num1;
        }
      
      else 
          {
              cout<<" the largest no. is: "<<num2;
            }  
      }   
};
int main()
{
    demo <int> ob1(5,2);
    ob1.check();


return 0;
}


