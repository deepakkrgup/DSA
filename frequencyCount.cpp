// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Length of the array : ";
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++)
//     {
//         bool alreadyPrinted = false;

//         for(int k=0;k<i;k++)
//         {
//             if(arr[i] == arr[k])
//             {
//                 alreadyPrinted = true;
//                 break;
//             }
//         }

//         if(alreadyPrinted)
//             continue;

//         int count = 0;

//         for(int j=0;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }

//         cout<<arr[i]<<" -> "<<count<<endl;
//     }
// }