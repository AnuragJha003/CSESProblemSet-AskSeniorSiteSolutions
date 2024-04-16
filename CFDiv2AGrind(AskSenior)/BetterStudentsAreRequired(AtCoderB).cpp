#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
#define int long long
#define x first
#define y second
using namespace std;
const int N=1e6+10;

struct node
{
	int id,a,b;
}e[N];
bool vis[N];

bool cmp1(node x,node y){
	if(x.a==y.a) return x.id<y.id;
	return x.a>y.a;
}
bool cmp2(node x,node y){
	if(x.b==y.b) return x.id<y.id;
	return x.b>y.b;
}
bool cmp3(node x,node y){
	if(x.a+x.b==y.a+y.b) return x.id<y.id;
	return x.a+x.b>y.a+y.b;
}

void solve(){
	vector<int>ans;
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	for(int i=1;i<=n;i++){
		cin>>e[i].a;
		e[i].id=i;
	}
	for(int i=1;i<=n;i++){
		cin>>e[i].b;
	}
	sort(e+1,e+1+n,cmp1);
	for(int i=1;i<=x;i++){
		ans.push_back(e[i].id);
		vis[e[i].id]=true;
	}
	sort(e+1,e+1+n,cmp2);
	for(int i=1;i<=n,y;i++){
		if(vis[e[i].id]) continue;
		y--;
		ans.push_back(e[i].id);
		vis[e[i].id]=true;
	}
	sort(e+1,e+1+n,cmp3);
	for(int i=1;i<=n,z;i++){
		if(vis[e[i].id]) continue;
		z--;
		ans.push_back(e[i].id);
		vis[e[i].id]=true;
	}
	sort(ans.begin(),ans.end());
	for(auto i:ans){
		cout<<i<<endl;
	}
}

signed main()
{
	IOS;
	int t=1;
//	cin>>t;
	while(t--) solve();

	return 0;
}