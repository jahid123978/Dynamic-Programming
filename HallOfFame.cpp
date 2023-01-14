#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int lcount = 0, rcount = 0;
        for(int i=1; i<n; i++){
            if(str[i-1] == 'R' && str[i] == 'L')
             rcount = i;
             if(str[i-1] == 'L' && str[i] == 'R')
             lcount = i;
        }
        if(lcount == 0 && rcount == 0){
            cout<<"-1"<<endl;
        }
        else{
            if(rcount>0){
                cout<<0<<endl;
            }
            else{
                cout<<lcount<<endl;
            }
        }
        
       
        
    }
}