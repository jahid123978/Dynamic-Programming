#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll> applyPermutation(vector<ll> &sequence, vector<ll> &permutation){
    vector<ll> newSequence(sequence.size(), 0);
    for(int i=0; i<sequence.size(); i++){
        newSequence[i] = sequence[permutation[i]-1];
    }
    return newSequence;
}
vector<ll> permute(vector<ll> &sequence, vector<ll> &permutation, long long b){
    while(b>0){
        if(b & 1){
            sequence = applyPermutation(sequence, permutation);
        }
        permutation = applyPermutation(permutation, permutation);
        b>>=1;
    }
    return sequence;
}
int main (){
    int t;
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t>0){
        ll n, k;
        cin>>n>>k;
        vector<ll>sequence(n), permutation(n);
        for(int i=0; i<n; i++)
        sequence[i] = (i+1);
        for(int i=0; i<n/2; i++)
        permutation[i] = (2*i+1);
        for(int i=n/2; i<n; i++)
        permutation[i] = ((i-n/2+1)*2);
        for(auto x : permute(sequence, permutation, k)){
            cout<<x<<" ";
        }
        cout<<endl;
        t--;
    }
}