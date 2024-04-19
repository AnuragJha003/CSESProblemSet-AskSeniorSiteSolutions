#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
	int n;cin>>n;
	int ma=0;
	int k=0;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		if(x==0){
			k++;
		}else{
			ma=max(ma,k);
			k=0;
		}
	}
	ma=max(ma,k);
	cout<<ma<<"\n";

}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}