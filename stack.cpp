#include <iostream>
using namespace std;
// implementation with the  help of array
class stack
{
public:
    int *arr;
    int size;
    int top;

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
            cout << "Stack is full "<<value<<" can't push";
        }
        else // insert the elemnts into the stack when stack is not full
        {
            top++;
            arr[top] = value;
            cout<<"pushed "<<value<<" into stack"<<endl;
        }
    }
    void pop() // create the function to delete the elements from the stack
    {
        if (top == -1) // base condtion to check the stack is empty
            cout << "stack is underflow "<<endl;
        else
            top--; // delete the elements from the stack
        cout << "popped element " << arr[top + 1] << " from the stack"<<endl;
    }
    int peek() // create the function to view the top element of the stack
    {
        if (top == -1)
        {
            cout << "stack is empty";
            return -1;
        }
        else
            return arr[top];
    }
    bool empty()
    {
        return (top == -1);
    }
    issize()
    {
        return top+1;
    }
};
int main()
{
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
   cout<<"top element in stack is "<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.issize()<<endl;
    cout<<s.empty()<<endl;

   
}