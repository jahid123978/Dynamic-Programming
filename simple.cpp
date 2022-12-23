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
        int d=2;
        long long a, b;
        long long int ans;
        long long int n;
       if(c == 0)
         n = 1;
       else if(c == 1)
         n = 2;
        else
        {
            while(n<c)
            {
                n = n*d;
            }
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