#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

void solve() {
	int n,t=1;
	string s;
	cin >> n >> s;
	for(int i = 0; i<(n-1); i++) {
		for(int j = i+1; j<n; j+=2) {
			if(s[i] == s[j]) {
				t = 0;
				break;
			}
		}
		if(t==0) break;
	}
	if(t==0) cout << "NO" << endl;
	else cout << "YES" << endl;
}

int main(){
    fastio;
	int n = 1; 
	cin >> n;
	while(n--) {
		solve();
	}
	return 0;
}
		 				  	  	      	   	  	 			