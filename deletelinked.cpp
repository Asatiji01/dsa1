#include <iostream>
using namespace std;
class Node
{
public:
    int data;   // data of the node
    Node *next; // current node address

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *head; // current node address
    head = NULL;
    //   if (head == NULL)
    //  {
    //     head = new Node(4);
    //  }
    //  head->next = new Node(28);
    //  head->next->next = new Node(14);
    //  // print node
    //  Node *temp;
    //  temp = head;
    //  while (temp != NULL)
    //  {
    //      cout << temp->data << " ";
    //      temp = temp->next;
    //  }

    int n;
    cout << " enter the number of nodes : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        if (head == NULL)
        {
            head = new Node(value);
        }
        else
        {
            Node *temp;
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Node(value);
        }
    }
    // print the elements of the linked list :
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        
    }
    // Clean up memory (optional but good practice)
    temp = head;
    while (temp != NULL)
    {
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
    // print the elements of the linked list after cleanup :
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
