#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n; 
	int ans=0;
	for(int pw = 1; pw<=n; pw =pw*10+1)	for(int i=1; i<=9; i++)	ans+=(pw*i <=n);
	cout << ans << "\n";
}

int main() {
	int t; cin >> t; 
	while(t--) solve(); 
}
