#include <bits/stdc++.h>

using namespace std;
#define int long long
#define vi vector<int>
#define vp vector<pair<int, int>>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define FastIO ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define mem(a, x) memset(a, x, sizeof a)
#define endl '\n'
const int sz = 1000000;
bool compo[sz + 1];
vi primes;
void sieve()
{
    compo[0] = compo[1] = true;
    for (int i = 2; i * i <= sz; ++i)
    {
        if(!compo[i]) {
            for (int j = i * i; j <= sz; j += i) {
                compo[j] = true;
            }
        }
    }
    for (int i = 2; i <= sz; ++i) {
        if(!compo[i])
            primes.pb(i);
    }
}
void solve() {
    int d; cin >> d;
    int prev = 1;
    int x = 2;
    int ans = 1;
    for (int p : primes) {
        if(p - prev >= d)
            ans *= p, prev = p, x--;
        if(!x)
            break;
    }
    cout << ans << endl;
}

signed main() {
    FastIO
    sieve();
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}