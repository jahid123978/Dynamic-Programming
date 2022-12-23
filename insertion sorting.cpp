#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int arr[] = {9, 5, 4, 3, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    for(int j=1; j<n; j++)
    {
        key = arr[j];
        int i = j-1;
        while(j>0 && arr[i]>key)
        {
            arr[i+1] = arr[i];
        }
        i = i-1;
        arr[i+1] = key;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
