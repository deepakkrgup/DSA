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

//     if(head==nullptr)
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
// Node* middleElement(Node* head)
// {
//     Node* slow = head;
//     Node* fast = head;

//     while(fast!=NULL && fast->next!=NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }

//     return slow;
// }
// int main()
// {
//     Node* head = nullptr;
//     int n;
//     cin>>n;
//     int value;
//     for(int i=0;i<n;i++)
//     {
//         cin>>value;
//         head = insert(head, value);
//     }

//     Node* midElement = middleElement(head);
//     cout<<midElement->data;
// }