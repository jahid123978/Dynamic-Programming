#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b == 0)
     return a;
     return gcd(b, a%b);
}
int lcm(int a, int b){
    return a/(gcd(a, b))*b;
}
int main(){
 int a = 60, b = 50;
 cout<<"Greatest Common divisor: "<<gcd(a, b)<<endl;
 cout<<"Least Common Multiple: "<<lcm(a, b)<<endl;
}