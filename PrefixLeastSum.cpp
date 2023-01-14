#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<long long>a(n+1, 0);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        long long mnPS = LLONG_MAX;
        vector<long long>pref(n+1, 0);
        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1]+pref[i];
            mnPS = min(mnPS, pref[i]);
        }
        if(mnPS == pref[m])
        {
            cout<<0<<endl;
            continue;
        }
        int ans = 0;
        mnPS = pref[m];
       priority_queue<long long>maxHeap;
       for(int i=m; i>=1; i--){
        if(pref[i]<mnPS){
            while(!maxHeap.empty() && pref[i]<mnPS){
                long long x = maxHeap.top();
                maxHeap.pop();
                mnPS -= (2LL*x);
                ans++;
            }
        }
        maxHeap.push(a[i]);
       }
       mnPS = pref[m];
       priority_queue<long long>mnHeap;
       for(int i=m+1; i<=n; i++){
        mnHeap.push(a[i]);
        if(pref[i]<mnPS){
            while(!mnHeap.empty() && pref[i]<mnPS){
                long long x = mnHeap.top();
                mnHeap.pop();
                mnPS -= (2LL*x);
                ans++;
            }
        }
       }
       cout<<ans<<endl;
    }
    return 0;
}