// #include<iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node* next;
// };
// Node* insert(Node* head, int val)
// {
//     Node* newnode = new Node();
//     newnode->data = val;
//     newnode->next = NULL;
//     if(head==NULL)
//     {
//         return newnode;
//     }

//     Node* temp = head;
//     while(temp->next != NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next = newnode;
//     return head;
// }
// Node* insertAtanyPos(Node* head, int val, int pos)
// {
//     Node* newnode = new Node();
//     newnode->data = val;

//     if(pos==0)
//     {
//         newnode->next = head;
//         return newnode;
//     }
//     Node* temp = head;
//     for(int i=0;i<pos-1;i++)
//     {
//         if(temp==NULL)
//         {
//             cout<<"position invalid!";
//         }
//         temp = temp->next;
//     }
//     newnode->next = temp->next;
//     temp->next = newnode;
//     return head; 
// }
// void traversal(Node* head)
// {
//     Node* temp = head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL";
// }
// int main()
// {
//     Node* head = NULL;
//     int n;
//     cin>>n;
//     int value;
//     for(int i=0;i<n;i++)
//     {
//         cin>>value;
//         head = insert(head, value);
//     }
//     cout<<"Singly Linked list : ";
//     traversal(head);

//     int key, pos;
//     cin>>key>>pos;
//     cout<<endl<<"Updated Singly Linked List : ";
//     insertAtanyPos(head, key, pos);
//     traversal(head);
// }