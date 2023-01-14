#include <bits/stdc++.h>
using namespace std;
int main (){
    int c;
    cin>>c;
    while(c--){
        long long x, y, m;
        cin>>x>>y>>m;
         x %= m;
        long long res = 1;
        while(y>0){
            if(y & 1)
            res = res * x%m;
         x = x*x%m;
         y>>=1;
        }
        cout<<res<<endl;
    }
}