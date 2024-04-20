#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 2e5 + 10;

int a[N], b[N];

void solve() {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1, b + 1 + n);
	for (int i = 1; i <= n; i++) {
		if (a[i] == b[n]) cout << a[i] - b[n - 1] << " \n"[i == n];
		else cout << a[i] - b[n] << " \n"[i == n];
	}
} 

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
						   			  	  	 	   	  	  	