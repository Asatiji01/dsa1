#include <iostream>
using namespace std;
int two(int arr[], int n)

{
int start = 0;
int end=n-1;
     while (start < end)
     {
          if (arr[start] == 0)
               start++;

          else
          {
               if (arr[end] == 0)
               {
                    swap(arr[start], arr[end]);
                    start++;
                    end--;
               }
               else
                    end--;
          }
     }
     for (int i = 0; i < 6; i++)
         return arr[i];
}
int mian()
{
 
     // we use the two pointers function
     int arr[6] = {0, 1, 0, 1, 0, 1};
     cout << two(arr, 6);
     return 0;

     // output will be 1 0 1 0 1 0  as we have moved all 1's to the left and 0's to the right.
}