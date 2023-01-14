#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long x, y;
        cin>>x>>y;
        long long res = 1;
        while(y>0){
            if(y & 1)
             res = res*x;
          x = x*x;
          y>>=1;
        }
        string first ="", second="";
        string ans = to_string(res);
        first += ans[0];
        first += ans[1];
        first += ans[2];
        second += ans[ans.length()-3];
        second += ans[ans.length()-2];
        second += ans[ans.length()-1];
        cout<<first<<"..."<<second<<endl;
    }
}