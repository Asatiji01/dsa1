#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;


   Node(int value)
   {
    data = value;
    next = NULL;
   }

};
int main()
{
    Node *head;   // create node head
    head = new Node(4); // insert the data into the head
     Node *temp; // create a temp node
        temp = new Node(28);  // data in temp node 
    if(head==NULL)
    {
        head = new Node(28);
    }
    else{
        
        temp->next=head;
        head=temp;
    }
   cout<<head->data<<endl;
    cout<<head->next<<endl;
}