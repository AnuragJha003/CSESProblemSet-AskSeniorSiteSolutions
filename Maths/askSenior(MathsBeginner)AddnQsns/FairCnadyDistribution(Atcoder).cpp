#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define x first
#define y second
using namespace std;
const int N = 1e6 + 7;
pii s[N];
int n,k,ans[N];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n>>k;
	for(int i=1;i<=n;++i) cin>>s[i].x,s[i].y = i;
	sort(s+1,s+n+1);
	
	for(int i=1;i<=n;++i){
		if(i<=k%n) ans[s[i].y] = k/n+1;
		else ans[s[i].y] = k/n;
	}
	for(int i=1;i<=n;++i) cout<<ans[i]<<'\n';
	return 0;
} 