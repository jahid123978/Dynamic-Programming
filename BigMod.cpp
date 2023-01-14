#include <bits/stdc++.h>
using namespace std;
int main (){
    long long b, p, m;
    while(cin>>b>>p>>m)
    {
        b %= m;
        long long res = 1;
        while(p>0){
            if(p & 1)
            res = res * b%m;
        b = b*b%m;
        p>>=1;
        }
        cout<<res<<endl;
    }

}