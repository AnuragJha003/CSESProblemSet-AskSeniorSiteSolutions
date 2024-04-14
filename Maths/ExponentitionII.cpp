#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll f(ll a,ll b ,ll mod){
if(a+b==0)return 1;// 0 to the power is 1 
ll c=1;
while(b>0){
if(b&1)c=c*a;//odd power 
if(c>=mod)c=c%mod;
b>>=1;a*=a;//divide the power by 2 and square the base 
if(a>=mod) a=a%mod;//modular exponentiation 
}
return c;
}
ll mod=1e9+7;
int main(){
ll t;cin>>t;
while(t--){
ll a;cin>>a;
ll b;cin>>b;
ll c;cin>>c;
ll ans=f(a,f(b,c,mod-1),mod);
cout<<ans<<endl;
}
return 0;
}