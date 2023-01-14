#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2 == 0){
            cout<<"YES\n";
            for(int i=0; i<n/2; i++){
                cout<<"1 -1";
                cout<<" ";
            }
            cout<<endl;
        }
        else if(n == 3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES\n";
            int x = n/2;
            for(int i=0; i<n/2; i++){
                cout<<x-1<<" "<<-x<<" ";
            }
            cout<<x-1<<endl;
        }
    }
}