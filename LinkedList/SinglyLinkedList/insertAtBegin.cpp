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
//     newnode->next = head;
//     head = newnode;
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
//     int size;
//     cin>>size;
//     int value;
//     for(int i=0;i<size;i++)
//     {
//         cin>>value;
//         head = insert(head, value);
//     }
//     cout<<"Traversal : ";
//     traversal(head);
// }