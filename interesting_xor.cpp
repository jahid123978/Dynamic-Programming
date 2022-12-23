#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long int c;
        cin>>c;
        int d=0;
        long long a, b;
        long long int ans;
        long long int n = pow(2, d);
        while(n<c)
        {
            d++;
            n = pow(2, d);
        }
        for(long long a = 1; a<n; a++)
        {
            for(long long b=a; b<n; b++)
            {
                 long long int ret = a^b;
             if(ret == c)
              {
                 ans = a*b;
              }
            }
        }
        cout<<ans<<endl;
    }
    
}