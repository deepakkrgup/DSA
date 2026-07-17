// #include<iostream>
// using namespace std;
// int partition(int arr[], int lb, int ub)
// {
//     int pivot = arr[lb];
//     int start = lb;
//     int end = ub;

//     while(start<end)
//     {
//         while(start<=ub && arr[start]<=pivot)
//         {
//             start++;
//         }

//         while(end>lb && arr[end]>pivot)
//         {
//             end--;
//         }

//         if(start<end)
//         {
//             swap(arr[start], arr[end]);
//         }
//     }

//     swap(arr[lb], arr[end]);

//     return end;
// }
// void quickSort(int arr[], int lb, int ub)
// {
//     if(lb<ub)
//     {
//         int pi = partition(arr, lb, ub);

//         quickSort(arr, lb, pi-1);
//         quickSort(arr, pi+1, ub);
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Size of array : ";
//     cin>>n;

//     int arr[n];
//     cout<<"Elements of array : ";
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     quickSort(arr, 0, n-1);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }