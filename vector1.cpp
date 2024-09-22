#include<iostream>
#include<vector>
using namespace std;
int main()
{/*
//         // how to initialize the vector
//         vector<int> v1; // an empty vector of integers
//         // size and capacity of the vector
//         cout<<"size of vector : "<<v1.size()<<endl;
//         cout<<"capacity of vector : "<<v1.capacity()<<endl;
        
//         // push elements into the vector
//         v1.push_back(2);
//         v1.push_back(3);
//         v1.push_back(4);
//         // push elements then size and capacity of vector
//         cout<<"size of vector : "<<v1.size()<<endl;
//         cout<<"capacity of vector : "<<v1.capacity()<<endl;
//         // capacity of vector is 4 because vector capacity increases with 2 power if we insert two more elements then capacity of vectgoe is 8
//         v1.push_back(5);
//         v1.push_back(7);
//         cout<<"size of vector : "<<v1.size()<<endl;
//         cout<<"capacity of vector : "<<v1.capacity()<<endl;
//         //print all the elements of vector
//         for(int i=0; i<v1.size(); i++)
//         {
//             cout<<v1[i]<<" ";
//         }
//         // update the elements of vector
//         v1[0]=5;
//         for(int i=0; i<v1.size(); i++)
//         {
//             cout<<"  "<<v1[i]<<" ";
//         }
//     // delete v1 elements from the vector
//     v1.pop_back();// remove last element from the vector
//     for(int i=0; i<v1.size(); i++)
//         {  cout<<endl;
//             cout<<"  "<<v1[i]<<" ";
//         }*/
//         // create the new vector
//         vector<int>v2;
//         // add elements to the vector
//         v2.push_back(1);
//         v2.push_back(2);
//         v2.push_back(3);
//         v2.push_back(4);
//         v2.push_back(5);
//         // erase the elemnts of vector 
//         v2.erase(v2.begin()+1); // erase the first element of vector which is 2
//         // print the value of vector
//     // for(int i=0; i<v2.size(); i++)
//         //{
//         // cout<<v2[i]<<" ";
//     // }
//         // insert the new element into the vector at any index
//         v2.insert(v2.begin()+1,50);
//         // print the updated vector
//         cout<<endl;
//     /*  for(int i=0; i<v2.size(); i++)
//         {
//             cout<<v2[i]<<" ";
//         }
//         remove all the elements from the vector
//     v2.clear();  // use to clear  of the elemnt of vector
//         cout<<"size of vector : "<<v2.size()<<endl;
//         cout<<"capacity of vector : "<<v2.capacity()<<endl;
//         */
//     // copy all elements of vector into a new vector
//         vector<int>v3;  // new vector
//         v3=v2;

//         for(int i=0; i<v3.size(); i++)
//         {
//             cout<<v3[i]<<" ";
//         }
//         cout<<endl;
//         // minimize the code to print 
//         for(auto i: v3)
//         cout<<i<<" ";

        // sorting the vector
        vector<int> ans;
        ans.push_back(5);
        ans.push_back(2);
        ans.push_back(11);
        ans.push_back(42);
        // sorting in assending order
        // sort(ans.begin(), ans.end());
         //for(auto i: ans)
         //cout<<i<<" ";
         // binary searching 
       //  cout<<binary_search(ans.begin(), ans.end(),2)<<endl;
         cout<<find(ans.begin(), ans.end(),2)-ans.begin()<<endl;

        
}