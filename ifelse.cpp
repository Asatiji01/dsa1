#include<iostream>
using namespace std;
int  main()
{
    char ch;
    cin>>ch;
    if (ch>='a'&& ch<='z') 
    {
        cout<<"it is a small alphabet";
    }     
   else if (ch>='A' && ch<='Z')
    {
        cout<<"it is big alphabet";
    }

else  {
        cout<<"invalid key";
    }
   
    return 0;
}

