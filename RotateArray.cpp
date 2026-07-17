#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1,2,3,4,5,6,7};
    int k = 3;

    for(int i=0;i<k/2;i++)
    {
        int j = k-1;
        swap(arr[i], arr[j-i]);
    }
    int m = n;
    for(int i=n-k-1;i<n;i++)
    {
        swap(arr[i], arr[n+k-i-1]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

