// #include<iostream>
// using namespace std;
// int main()
// {
//     // 1. NULL Pointer (A pointer that points to nothing.)
//     int *p = NULL;

//     // 2. WILD Pointer (A wild pointer is a pointer that is declared but not initialized.
//     //It points to some random memory location (garbage address).)

//     int *ptr;
//     cout<<ptr;

//     // 3. Dangling Pointer 
//     // (A dangling pointer is a pointer that points to a memory location that has already been freed or deleted.)

//     int *ptr = new int(10);

//     delete ptr;   // memory freed

//     cout << *ptr; // dangerous

//     // 4. Void Pointer(it store address of any datatype);
//     // void *p;
// }