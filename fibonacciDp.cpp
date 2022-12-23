#include <bits/stdc++.h>
using namespace std;
// Memoization technique to solution fibonacci series 
int fibonacci(int n, vector<int>dp){
    if(n<=1)
      return n;
    if(dp[n] != -1)
       return dp[n];
     return dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
}

//Tabulation technique to solution fibonacci series
int tabulationFibonacci(int n, vector<int>dp){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main (){
    int n;
    cin>>n;
    vector<int>dp(n+1, -1);
    // cout<<fibonacci(n, dp)<<endl;
    cout<<tabulationFibonacci(n, dp)<<endl;

}