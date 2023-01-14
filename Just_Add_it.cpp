#include <bits/stdc++.h>
using namespace std;
long long binExpo(long long a, long long b){
    long long res = 1;
    while(b>0){
        if(b&1)
        res = (res*a)%10000007;
      a = (a*a)%10000007;
      b>>=1;
    }
    return res;
}
int main (){
    long long n, k;
    while(cin>>n>>k){
        if(n == 0 && k == 0)
          break;
       long long zSum = 2*binExpo(n-1, k)%10000007;
       long long sSum = binExpo(n, k)%10000007;
       long long zSum1 = 2*binExpo(n-1, n-1)%10000007;
       long long sSum1 = binExpo(n, n)%10000007;
      
       cout<<(zSum+sSum+zSum1+sSum1)%10000007<<endl;
       
    }
}