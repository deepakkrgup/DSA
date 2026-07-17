// #include<iostream>
// using namespace std;
// void merge(int arr[], int low, int mid, int high)
// {
//     int temp[100];

//     int i = low;
//     int j = mid+1;
//     int k = 0;

//     while(i<=mid && j<=high)
//     {
//         if(arr[i]<=arr[j])
//         {
//             temp[k++] = arr[i++];
//         }
//         else
//         {
//             temp[k++] = arr[j++];
//         }
//     }

//     while(i<=mid)
//     {
//         temp[k++] = arr[i++];
//     }

//     while(j<=high)
//     {
//         temp[k++] = arr[j++];
//     }

//     for (int x = 0; x < k; x++)
//     {
//         arr[low + x] = temp[x];
//     }
// }
// void mergeSort(int arr[], int lb, int ub)
// {
//     if(lb>=ub)
//         return;

//     int mid = (lb+ub)/2;

//     mergeSort(arr, lb, mid);
//     mergeSort(arr, mid+1, ub);

//     merge(arr, lb, mid, ub);
// }
// int main()
// {
//     int n;
//     cout<<"Size of Array : ";
//     cin>>n;

//     int arr[n];

//     cout<<"Elements of array : ";

//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     mergeSort(arr, 0, n-1);

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }