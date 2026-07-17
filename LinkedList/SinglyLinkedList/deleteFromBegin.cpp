// #include <iostream>
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
    
//     while(temp->next!=NULL)
//     {
//         temp = temp->next;
//     }
    
//     temp->next =  newnode;
//     return head;
// }
// void deletefrombegin(Node* &head)
// {
//     Node* newnode = new Node();
//     newnode = head->next;
//     head = newnode;
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
// int main() {
//     Node* head = NULL;
//     int n;
//     cin>>n;
//     int val;
//     for(int i=0;i<n;i++)
//     {
//         cin>>val;
//         head = insert(head, val);
//     }
//     cout<<"Singly Linked list : ";
//     traversal(head);
//     cout<<endl<<"inserted!!"<<endl;
    
//     deletefrombegin(head);
//     cout<<"After deleting first node : ";
//     traversal(head);
    
//     return 0;
// }