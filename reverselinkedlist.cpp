#include<iostream>
#include<vector>
using namespace std;
class Node{
            public:
            int data;
          Node* next;   

           Node(int value)   // use constructor to initialize
           {
           data = value;
           next = NULL;
           }
};
int main()
{
    // create a linked list to hold the reversed values of list elements
     Node *head; // current node address
    head = NULL;
     if (head == NULL) // base condition
      {
         head = new Node(4);   // insert the first elements in the list
      }
      head->next = new Node(28);   // add another data on the list
      head->next->next = new Node(14);
      // print node
      Node *temp;
      temp = head;
      while (temp != NULL)    // loop through :

      {
          cout << temp->data << " ";
          temp = temp->next;
      }
      cout<<endl;
      // create a  vector to store the value of nodes
      vector<int> ans;
      Node *temp2 =head;
      while(temp2 != NULL)
      {
        ans.push_back(temp2->data);   // push all the elements of list in vector
        temp2 = temp2->next;   
      }
      temp=head; 
      for(int i=ans.size()-1; i>=0; i--)
      {
        temp->data=ans[i];     // push element of vector into the list
        temp=temp->next;
      }    
      // print the list after reversing the order of elements
         Node *temp1;
      temp1 = head;
      while (temp1 != NULL)
      {
          cout << temp1->data << " ";
          temp1= temp1->next;
      }

      // reverse of the nodes of the linked list not elements
      Node *curr , *prev , *fut;
      curr= head;
      prev=NULL;
      fut=NULL;
      while (curr!=NULL) {
      
      fut=curr->next;
      curr->next=prev;
      prev=curr;
      curr=fut;
      head=prev;
      }
      

}