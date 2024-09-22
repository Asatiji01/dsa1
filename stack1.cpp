#include <iostream>
using namespace std;
// implementation of the stack with the help of array
class stack{
public:
    int *arr;
    int size;
    int top;
    //constructor to initialize the stack with given size
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    void push(int value) // create a function to push element into the stack
    {
        // base condition to chrck the satck is full or not
        if (top == size - 1)
        {
            cout << "Stack is full " << value << " cannot be pushed" << endl;
        }
        else // insert the elemnts into the stack when stack is not full
        {
            top++;
            arr[top] = value;
            cout << "pushed " << value << " into stack" << endl;
        }
    }
    void pop() // create the function to delete the elements from the stack
    {
        if (top == -1) // base condtion to check the stack is empty
            cout << "stackn is underflow";
        else
            top--; // delete the elements from the stack
        cout << "popped elements " << arr[top + 1] << " from the stack" << endl;
        ;
    }
};
int main()
{
    stack s(5);
    s.push(10); // push the elements into stack
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60); // This will push 60 but stack is full and will not be pushed.
    s.pop();    // pop the elements from the stack
    s.pop();
    s.pop();
}