#include<iostream>
using namespace std;
class math{
        private:
        int a;
        int b;

        public:
        int solve(int input)
        {
            a=input;
            b=a/2;
            return b;
        }
    
};
int main()
{
    int n;
    cin>>n;
    math half;
    int ans=half.solve(n);
    cout<<ans;  


    return 0;
}
