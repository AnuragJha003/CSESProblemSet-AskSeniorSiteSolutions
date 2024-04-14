#include<bits/stdc++.h>
using namespace std;
#define ll long long 

const int MOD=1000000007;
long long int inverse(long long int i){
    if(i==1) return 1;
    return (MOD - ((MOD/i)*inverse(MOD%i))%MOD+MOD)%MOD;
}
ll POW(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll temp=POW(a,b/2);
    if(b%2==0) return (temp*temp)%MOD;
    else return (((temp*temp)%MOD)*a)%MOD;
}
map<ll,ll> f;

ll fib(ll n)
{
    if(f.count(n)) return f[n];
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    if(n%2==0)
    {
        ll k=n/2;
        ll ret1=fib(k-1),ret2=fib(k);
        return f[n]=((((2ll*ret1)%MOD+ret2)%MOD)*ret2)%MOD;
    }
    else
    {
        ll k=(n+1)/2;
        ll ret1=fib(k-1),ret2=fib(k);
        return f[n]=( (ret1*ret1)%MOD + (ret2*ret2)%MOD)%MOD;
    }
}
void solve(){
ll n;cin>>n;
//vector<ll> v(n);
ll ans=0;
for(int i=1;i<=n;i++){
ll x;cin>>x;
if(i%2==0){
ans=ans^x;
}
}
if(ans){
cout<<"first"<<endl;
}
else{
cout<<"second"<<endl;
}
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t;cin>>t;
	while(t--){
	solve();
	}
}