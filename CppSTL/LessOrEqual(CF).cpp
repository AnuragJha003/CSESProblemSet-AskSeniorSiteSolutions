#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2 * 1e5 + 5;
ll a[N];

int main() {
    ll n, k;
    cin >> n >> k;
    
    for (ll i = 1; i <= n; i++) cin >> a[i];
    sort (1 + a, n + a + 1);
    
    if (a[1] == 1) a[0] = -1;
    else a[0] = a[1] - 1;
    
    if (a[k] != a[k + 1]) cout << a[k];
    else cout << -1;
}