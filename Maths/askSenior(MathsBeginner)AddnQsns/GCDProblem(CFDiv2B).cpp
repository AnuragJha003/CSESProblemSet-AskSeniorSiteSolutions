#include<bits/stdc++.h>
using namespace std;
#define int long long 

void f(){
int n;cin>>n;
int c=1;
int a,b;
for(int i=1;i<=n;i++){
a=i;
b=n-i-1;
if(__gcd(a,b)==c){
if(a!=b && b!=c && a!=c){
cout<<a<<" "<<b<<" "<<c<<endl;
return;
}
}
}
}
signed main(){
int t;cin>>t;
while(t--){
f();
}
}