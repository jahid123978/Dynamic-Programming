#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool valid_or_not(int arr[], int n)
{
   int arr2[n];
    for(ll i=0; i<n; i++)
    {
       arr2[i] = arr[i];
       if(arr[i] == arr[i+1])
       {
          arr2[i] = arr[i+1]+1;
       }
    }
    set<ll>hash;
    int max_el = 0;
    for(ll i=0; i<n; i++)
    {
       hash.insert(arr2[i]);
       max_el = max(max_el, arr2[i]);
    }
    if(max_el != n)
     return false;
     if(hash.size() == n)
       return true;
     return false;
}
int main ()
{
   ll t;
   cin>>t;
   while (t--)
   {
      ll n;
      cin>>n;
      int arr[n];
      int brr[n];
      for(ll i=0; i<n; i++)
         {
            cin>>arr[i];
         }
      bool flag = valid_or_not(arr, n);
      if(flag == true)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
   }
   
}