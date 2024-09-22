#include <iostream>
using namespace std;
 class Node
 { // create a class node to our linked list
 public:
     int data;   // this is the data part od node
     Node *next; // that is a address of the next node

     Node(int value) // use constructor to take values of nodes
     {
         data = value;
         next = NULL;
     }
 };
// int main()
// {
//      // program to copy the arrat elemeNTS IN linlked list
//      //int arr[5]={1,2,3,4,5};     // array of five elements
//      //Node *head;  // create  head node
//     // head =NULL;
//     // for(int i=0;i<5;i++)     // insert the element of array in our linked list
//     // {
//     //     if(head==NULL)    // base condition
//     //     {
//     //         head = new Node(arr[i]);   //  insert the first element of array
//     //     }
//     //     else
//     //     {
//     //         Node *temp = new Node(arr[i]);  // create new node
//     //         temp->next = head;  //  link the new node with head
//     //         head = temp;   //  update the head with new node
//     //     }
//     // }

//     // // print the list of values
//     // Node *temp =head;    //  temporary nodes to point the head node if we use head node in place of temp node we loss our first position of list node
//     // while(temp!=NULL)
//     // {
//     //     cout<<temp->data<<" ";
//     //     temp=temp->next;
//     // }

//   problem :  // insert node at the end of list
//     int arr[6] = {0, 1, 2, 3, 4, 5};
//     Node *head;
//     head = NULL;
//     Node *tail;
//     tail = NULL;
//     for (int i = 0; i < 6; i++)
//     {
//         if (head == NULL)
//         {
//             head = new Node(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             tail->next = new Node(arr[i]);
//             tail = tail->next;
//         }
//     }
// print the linked list at the end of insertion
//     Node *temp;
//     temp = head;
//     while (temp->next != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }


//   problem:  // add node at end with the help of recursion

// }
// //Node* createlink(int arr[],int index, int size)
// {
//     if(index==size)  // base case
//     {
//         return NULL;
//     }
    
//         Node *temp;
//         temp =new Node (arr[index]);
//         temp->next =createlink(arr,index+1,size);
//     return temp;
// }

// problem add the node at the beginning of the list 
 
 Node *createlink2(int arr[], int index, int size ,Node *prev)
 {
    // base condition
    if(index==size)
    {
        return prev;
    }
    // recursive case
    Node *temp;
    temp =new Node(arr[index]);
    temp->next=prev;
  return   createlink2(arr,index+1,size,temp);
 } 
int main()
{
    Node *head;
    head =NULL;
    int arr[5]={0,1,2,3,4};
  //  head =createlink(arr,0,5);
head = createlink2(arr,0,5,head);

// print the list with the help of recursion
     Node *temp;
    temp = head;
    while (temp)
     {
         cout << temp->data << " ";
         temp = temp->next;
     }
}