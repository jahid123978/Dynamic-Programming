// #include <bits/stdc++.h>
// using namespace std;
// vector<int> applyPermutation(vector<int> sequence, vector<int> permutation) {
//     vector<int> newSequence(sequence.size());
//     for(int i = 0; i < sequence.size(); i++) {
//         newSequence[i] = sequence[permutation[i]];
//     }
//     return newSequence;
// }

// vector<int> permute(vector<int> sequence, vector<int> permutation, long long b) {
//     while (b > 0) {
//         if (b & 1) {
//             sequence = applyPermutation(sequence, permutation);
//         }
//         permutation = applyPermutation(permutation, permutation);
//         b >>= 1;
//     }
//     return sequence;
// }
// int main (){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n, k;
//         cin>>n>>k;
//         vector<char>candidates(n);
//         long long count = 0;
//        for(long long int i=1; i<=n; i++){
//         if(i%2 == 1){
//             candidates[count] = i;
//             count++;
//         }
//        }
//        for(long long int i=1; i<=n; i++){
//         if(i%2 == 0){
//              count++;
//             candidates[count] = i;
//         }
//        }
      
//     }
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> bin_exp_perm(vector<ll> &a,vector<ll> &seq, ll b){
    vector<ll> temp(a.size(),0);
    while(b){
        if(b&1){
            for(int i=0;i<a.size();i++)temp[i]=a[seq[i]-1];
            a=temp;
        }
        for(int i=0;i<a.size();i++)temp[i]=seq[seq[i]-1];
        seq=temp;
        b>>=1;
    }
    return a;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),seq(n);
    for(int i=0;i<n;i++)a[i]=i+1;
    for(int i=0;i<n/2;i++)seq[i]=2*i+1;
    for(int i=n/2;i<n;i++)seq[i]=(i-n/2+1)*2;
    for(auto x : bin_exp_perm(a,seq,k))cout<<x<<" ";
    cout<<'\n';
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin>>t;
    for (int i=1;i<=t;i++){
        solve();
    }
    return 0;
}