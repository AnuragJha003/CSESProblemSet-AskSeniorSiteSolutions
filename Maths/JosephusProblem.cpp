#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll f(ll n,ll k){
if(n&1){
//if odd h 
ll torem=(n+1)/2;
if(k<torem)return 2*k-1;
if(k==torem)return 0;
ll num=f(n-torem,k-torem);
return 2*(num+1);
}
ll torem=n/2;
if(k<=torem) return 2*k-1;
ll num=f(n-torem,k-torem);
return 2*num;
}
int main(){
ll q;cin>>q;
while(q--){
ll n;cin>>n;ll k;cin>>k;
ll ans=f(n,k)+1;
cout<<ans<<endl;
}
return 0;
}