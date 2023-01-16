#include <bits/stdc++.h>
using namespace std;
long long bin_expo(long long a, long long b){
        long long res = 1;
        while(b>0){
            if(b & 1)
             res = (res*a)%1000000007;
         a = (a*a)%1000000007;
        b>>=1;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        long long fourthEven = n/2;
        long long fifthOdd = n-fourthEven;
        return bin_expo(4LL, fourthEven)%1000000007 * bin_expo(5LL, fifthOdd)%1000000007;
    }
int main (){
  int n =5;
  cout<<countGoodNumbers(n)<<endl;
}