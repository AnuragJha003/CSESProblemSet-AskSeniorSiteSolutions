#include<bits/stdc++.h>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ll long long
#define pb push_back
#define ar array
#define vi vector
#define bit(i,x) ((x >> i) & 1ll)
#define all(x) x.begin(),x.end()
#define len(l,r) (r-l+1)
#define next ___next
 
const long long mod = 1e9+9, N = 500, INF = 1e18, Log = 25,block = 300;
using namespace std;
 
void solve() {
    ll n ;
    cin >> n;
    ll a[n+5];
    map<ll,ll> mp;
    for(int i = 1; i <= n;i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    set<ll> s;
    ll ans =0 ;
    for(int i = 1; i <= n;i++) {
        s.insert(a[i]);
        mp[a[i]]--;
        if(mp[a[i]] == 0) ans += s.size();
    }
    cout << ans << '\n';
} 
 
 
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("06.inp", "r", stdin);
    // freopen("06.out", "w", stdout);
    ll t = 1;
    cin >> t;
    for(ll x = 0; x < t;x++) {
        // cout << "Case " << x << " :"; 
        solve();
    }
}