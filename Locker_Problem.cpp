#include <bits/stdc++.h>
using namespace std;

long long binExpo(long long a, long long b){
    if(b == 0)
    return 1;
    if(b == 1)
    return a%1000000007;
    long long ans = binExpo(a, b/2);
    if(b%2 == 1)
    return (ans%1000000007 * ans%1000000007 * a%1000000007)%1000000007;
    else
    return (ans%1000000007 * ans%1000000007)%1000000007;
}
int main (){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        long long n1, ans;
        cin>>n;
      if(n<3){
        cout<<n<<endl;
        continue;
      }
      // if remainder is 1 such that 10
//we might think of choosing the combination: 3, 3, 3, 1
//but notice that 1 in the above combination is not giving us any significant profit
//as any number multiplied by 1 gives the same number, Rather it would be better if instead of
//3*1 we have 2*2 notice that still have same sum but different products
      if(n%3 == 1)
      {
        n1 = (n-4)/3;
        ans = 4*binExpo(3, n1);
      }
      else if(n%3 == 2){
        n1 = (n-2)/3;
        ans = 2*binExpo(3, n1);
      }
      else
       ans = binExpo(3, n/3);
        cout<<ans%1000000007<<endl;
    }
}