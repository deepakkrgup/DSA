// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Size of Array : ";
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Before Sorting : ";

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     for(int i=0;i<n;i++)
//     {
//         int minIndex = i;

//         for(int j=i;j<n;j++)
//         {
//             if(arr[minIndex]>arr[j])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);

//     }

//     cout<<endl<<"After Sorting : ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }