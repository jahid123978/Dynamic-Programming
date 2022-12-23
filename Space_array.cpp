#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main ()
{
   ll t;
   cin>>t;
   while (t--)
   {
      ll n;
      cin>>n;
      int arr[n];
      for(ll i=0; i<n; i++)
         {
            cin>>arr[i];
         }
         sort(arr, arr+n);
         ll sum = 0;
         int count = 0;
        for(ll i=0; i<n; i++)
        {
            if(i+1-arr[i]<0)
            {
                count = 1;
                break;
            }
            
                sum = sum + ((i+1) - arr[i]);
        }
        if(count == 1)
        {
            cout<<"Second"<<endl;
        }
        else{
        if(sum%2 == 1)
         cout<<"First"<<endl;
         else
         cout<<"Second"<<endl;
        }
   }
   
}