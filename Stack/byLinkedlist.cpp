// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// class Stack
// {
//     int size;
//     Node *top;

//     public:
//     Stack()
//     {
//         size = 0;
//         top = NULL;
//     }

//     void push(int val)
//     {
//         Node* newnode = new Node(val);
//         if(newnode == NULL)
//         {
//             cout<<"Stack overflow!"<<endl;
//             return;
//         }
//         else
//         {
//             newnode->next = top;
//             top=newnode;
//             size++;
//             cout<<"Pushed "<<val<<" into the Stack."<<endl;
//         }
//     }

//     void pop()
//     {
//         if(top==NULL)
//         {
//             cout<<"Stack underflow!"<<endl;
//             return;
//         }
//         else
//         {
//             Node* temp = top->next;
//             cout<<"Popped "<<top->data<<" from Stack."<<endl;
//             top=temp;
//         }
//     }

//     void peek()
//     {
//         if(top==NULL)
//         {
//             cout<<"Stack is Empty."<<endl;
//             return;
//         }
//         else
//         {
//             cout<<"Top elememt is "<<top->data<<endl;
//         }
//     }

//     bool isEmpty()
//     {
//         return top==NULL;
//     }

//     int isSize()
//     {
//         return size;
//     }
// };
// int main()
// {
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.pop();
//     st.peek();

//     if(st.isEmpty())
//     {
//         cout<<"Stack is Empty."<<endl;
//     }
//     else
//     {
//         cout<<"Stack is not Empty"<<endl;
//     }

//     int n = st.isSize();

//     cout<<"Size of Stack is "<<n;
// }