#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        a = a%10;
    long long res = 1;
    while(b>0){
        if(b & 1)
         res = res*a;
      a = a*a;
      b>>=1;
    }
    cout<<res%10<<endl;
    }
}