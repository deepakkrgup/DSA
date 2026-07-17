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
//         temp = temp->next;
//     }

//     temp->next = newnode;
//     return head;
// }
// void reverse(Node* &head)
// {
//     Node* prev = NULL;
//     Node* current = head;

//     while(current!=NULL)
//     {
//         Node* next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }

//     head = prev;
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
//     cout<<"Inserted Linked List : ";
//     traversal(head);

//     cout<<endl<<"Reversed Linked List : ";
//     reverse(head);
//     traversal(head);
// }