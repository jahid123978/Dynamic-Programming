#include <bits/stdc++.h>
using namespace std;
// typedef long long int lli;
string getPermutation(int n, int k){
    string ans = "";
    vector<char>candidates(n);
    for(long long int i=0; i<n; i++)
     candidates[i] = ((i+1) + '0');
 vector<long long int>fact(n+1);
 fact[0] = 1;
 for(long long int i=1; i<=n; i++){
    fact[i] = fact[i-1] * i;
 }
 k--;
 for(long long int i=n-1; i>=0; i--){
    long long int index = k/fact[i];
    ans += candidates[index];
  for(long long int j=index; j+1<candidates.size(); j++){
    candidates[j] = candidates[j+1];
  }
  k = k%fact[i];
 }
 return ans;
}
//  string getPermutation(int n, int k) {
//       string ans = "";
//       vector <char> candidates(n);
//       for(lli i = 0; i < n; i++)
//          candidates[i] = ((i + 1) + '0');
//       vector <lli> fact(n + 1);
//       fact[0] = 1;
//       for(lli i = 1; i <= n; i++)
//          fact[i] = fact[i - 1] * i;
//       k--;
//       for(lli i = n - 1; i >= 0; i--){
//          lli idx = k / fact[i];
//          ans += candidates[idx];
//          for(lli j = idx; j + 1< candidates.size(); j++)
//             candidates[j] = candidates[j + 1];
//          k = k % fact[i];
//       }
//       return ans;
//    }
int main (){
 cout<<getPermutation(3, 3)<<endl;
}