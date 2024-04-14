#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;
cin>>t;
while(t--){
	ll n,ans;
	cin>>n;
	ll a[n],i,j;
	map<ll,ll> m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	m[a[i]]++;
	}
	sort(a+1,a+n+1);
	if(a[1]==a[n]) ans=(n*(n-1)); else ans=m[a[1]]*m[a[n]]*2;
	cout<<ans<<endl;
}
}