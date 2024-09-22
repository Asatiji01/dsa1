#include <iostream>
using namespace std;
// implimentation of stack with the help of linked list
class Node   // create a Node class
{
public:
    int data;  // data part of node
    Node *next;  //adress of next node

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class stack  // create a stack class to push pop operations onto the stack
{

    Node *top;
       int size; // actual size of stack
public:
    stack()  // constructor for stack
    {
        top = NULL;
         size = 0;
    }
    void push(int value)  // create a function to push elements into the stack
    {
        Node *temp = new Node(value); // make a node to store values
        if (temp == NULL) // base condition 
        {
            cout << "Stack is full\n";
            return;
        }
        else
        {
            temp->next = top;  //  push the elements into the stack
            top = temp;
            size++;
            cout << "pushed " << value << " into the stack"<<endl;
        }
    }
    void pop()  // create a pop function to delete elements into the stack
    {
        if (top == NULL) // base case
        {
            cout << "Stack is empty\n";
            return;
        }
        Node *temp = top;  // delete elements into the stack
        cout << "Popped " << temp->data << " from the stack"<<endl;
        top = top->next;
        delete temp;
        size--;
    }
};

int main()
{
    stack s;  // make object to use the stack
    s.push(10);  // pushed the value in stack and poped also
    s.push(20);
    s.push(30);
    s.pop();
    s.pop();
    s.push(40);
    s.pop();
    s.pop();
    s.pop();
    return 0;
}