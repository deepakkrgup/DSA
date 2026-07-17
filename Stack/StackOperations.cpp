// #include<iostream>
// using namespace std;

// int stack[5];
// int top = -1;

// void push(int val)
// {
//     if(top==4)
//     {
//         cout<<"Stack is Overflow"<<endl;
//     }
//     else
//     {
//         top++;
//         stack[top] = val;
//     }
// }
// void pop()
// {
//     if(top==-1)
//     {
//         cout<<"Stack is Underflow"<<endl;
//     }
//     else
//     {
//         cout<<"Deleted : "<<stack[top]<<endl;
//         top--;
//     }
// }
// void peek()
// {
//     if(top==-1)
//     {
//         cout<<"Stack is empty";
//     }
//     else
//     {
//         cout<<"Top Element : "<<stack[top]<<endl;
//     }
// }
// void display()
// {
//     for(int i=top;i>=0;i--)
//     {
//         cout<<stack[i]<<endl;
//     }
// }
// int main()
// {
//     push(10);
//     push(20);
//     push(30);

//     display();

//     peek();

//     pop();

//     display();
// }


// method 2

// #include<iostream>
// using namespace std;

// class Stack
// {
//     int *arr;
//     int size;
//     int top;

//     public:

//     Stack(int s)
//     {
//         size = s;
//         arr = new int(s);
//         top = -1;
//     }

//     void push(int val)
//     {
//         if(top == size-1)
//         {
//             cout<<"Stack OverFlow!"<<endl;
//             return;
//         }
//         else
//         {
//             top++;
//             arr[top] = val;

//             cout<<"Pushed "<<arr[top]<<" into Stack."<<endl;
//         }
//     }

//     void pop()
//     {
//         if(top == -1)
//         {
//             cout<<"Stack UnderFlow!"<<endl;
//             return;
//         }
//         else
//         {
//             cout<<"Popped "<<arr[top]<<" from the Stack."<<endl;
//             top--;
//         }
//     }

//     void peek()
//     {
//         if(top == -1)
//         {
//             cout<<"Stack is Empty."<<endl;
//             return;
//         }
//         else
//         {
//             cout<<"Top element of the stack is "<<arr[top]<<"."<<endl;
//         }
//     }

//     bool isEmpty()
//     {
//         if(top == -1)
//         {
//             return true;
//         }
//         return false;
//     }

//     int isSize()
//     {
//         return top+1;
//     }
// };
// int main()
// {
//     Stack st(5);

//     st.push(10);
//     st.push(20);
//     st.peek();
// }
