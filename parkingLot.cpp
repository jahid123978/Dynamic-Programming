#include <bits/stdc++.h>
using namespace std;
int main (){
    long long n;
    cin>>n;
    long long ans = n;
    long long a = n;
    long long res = 1;
    while(a>0){
        if(a & 1)
        res = res*n;
      n = n*n;
      a>>=1;
    }
    cout<<res-ans<<endl;
}