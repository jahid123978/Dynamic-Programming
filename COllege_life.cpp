#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main ()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, e, h, a, b, c;
        cin>>n>>e>>h>>a>>b>>c;
        ll item;
        if(a == b && b == c)
        {
            cout<<"-1"<<endl;
            break;
        }
        else if((a>b && a>c) && b>c)
        {
            while((e != 0 && h != 0) && n>=item)
            {
                e--;
                h--;
                item++;
            }
            cout<<item*c<<endl;
            break;
        }
        else if((b>a && b>c) && c>a)
        {
            int count = 0;
            ll omlet = 0, choco_m = 0, choco_c = 0;
            while(2<=e && n>=count)
            {
                e -=2;
                omlet++;
                count++;
            }
            while((e !=0 && h>=1) && n>=count)
            {
                e--;
                h--;
                choco_c++;
                count++;
            }
            while(h>=3 && n>=count)
            {
                h -=3;
                choco_m++;
                count++;
            }
          cout<<omlet*a+choco_c*c+choco_m*b<<endl;
          break;
        }
        else if((c>a && c>b) && a>b)
        {
            ll oml = 0, ch_m = 0, ch_c = 0;
            ll ch;
            while(h>=3 && n>=ch)
            {
                h -=3;
                ch_m++;
                ch++;
            }
            while(e>=2 && n>=ch)
            {
                e -=2;
                oml++;
                ch++;
            }
            while((e != 0 && h != 0) && n>=ch)
            {
                e--;
                h--;
                ch_c++;
                ch++;
            }
            cout<<ch_m*b+oml*a+ch_c*c<<endl;
            break;
        }
    }
}