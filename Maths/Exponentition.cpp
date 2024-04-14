#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll mod=1e9+7;
int main(){
ll t;cin>>t;
while(t--){
ll a;cin>>a;
ll b;cin>>b;
ll c=1;
while(b>0){
if(b&1)c=c*a;
if(c>=mod)c=c%mod;
b>>=1;a=a*a;
if(a>=mod)a=a%mod;
}
cout<<c<<endl;
}
return 0;
}