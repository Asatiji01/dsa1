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

//     // insert node at the end of list
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
//     Node *temp;
//     temp = head;
//     while (temp->next != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }


//     // add node at end with the help of recursion

// }
Node* createlink(int arr[],int index, int size)
{
    if(index==size)  // base case