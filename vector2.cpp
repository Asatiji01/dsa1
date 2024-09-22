#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int>v;
 for(int i=0; i<5; i++)
 {
    int ele;
    cin>>ele;
    v.push_back(ele);
 }
 for (int i=0; i<v.size(); i++)
 {
    cout<<v[i]<<" "<<endl;
 }
 v.insert(v.begin()+2, 6);
 for(int ele:v)
 {
    cout<<ele<<" "<<endl;
 }
 v.erase(v.end()-2);

 for(int ele:v)
 {
    cout<<ele<<" ";
 }
 return 0;
}