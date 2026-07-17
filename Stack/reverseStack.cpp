// #include<iostream>
// using namespace std;
// int stack[5];
// int top = -1;
// void push(int val)
// {
//     if(top==4)
//     {
//         cout<<"Stack is Overflow";
//     }
//     else
//     {
//         top++;
//         stack[top] = val;
//     }
// }
// void reverse()
// {
//     int start = 0;
//     int end = top;

//     while(start<end)
//     {
//         int temp = stack[start];
//         stack[start] = stack[end];
//         stack[end] = temp;
//         start++;
//         end--;
//     }
// }
// void display()
// {
//     if(top==-1)
//     {
//         cout<<"Stack is empty."<<endl;
//     }
//     else
//     {
//         for(int i=top;i>=0;i--)
//         {
//             cout<<stack[i]<<endl;
//         }
//     }
// }
// int main()
// {
//     push(10);
//     push(20);
//     push(30);
//     push(40);

//     display();

//     reverse();

//     cout<<"Reversed Stack "<<endl;
//     display();
// }