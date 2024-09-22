// C++ program for the union of two arrays using Set

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{   
    
    //Declare and Initialize two array objects.
	int a[9] = {18,17,13,12,14,11,11,10,12};
	int b[10] = {16,13,14,13,15,11,12,10,19,10 };
    
    //Create an empty set.
    set<int> s;
    
    // Insert the first array elements into set object.
	for (int i = 0; i < 9; i++)
	  s.insert(a[i]);
      
    // Insert the second array elements into the set object.
    for (int i = 0; i < 10; i++)
		s.insert(b[i]);
     
     // Print some message if you want to print it.
   cout << "Number of elements after union operation: " << s.size() << endl;
   cout << "The union set of both arrays is :" << endl;
   
   // Print the elements of the set.
   for (auto itr = s.begin(); itr != s.end(); itr++)
		cout << *itr
			<< " ";
}

