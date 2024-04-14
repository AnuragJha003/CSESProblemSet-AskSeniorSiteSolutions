#include<bits/stdc++.h>
using namespace std;

# define ll long long


void solve(){
	ll n;
	cin >> n;
	++n;
	ll p = 1;
	ll ans = 0;
	auto prod = [](ll k){
		ll z = 1;
		while(k != 0){
			z *= k % 10;
			k /= 10;
		}
		return z;
	};

	while(n != 0){
		ans = max(ans, prod(n*p - 1));
		n /= 10;
		p *= 10;
	}
	cout << ans << '\n';
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t;
	t = 1;
	while(t--){
		solve();
	}
}