#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, n) for (ll i = 1; i < (n); ++i)
#define rrep(i, n) for (ll i = n; i > 0; --i)
#define bitrep(i, n) for (ll i = 0; i < (1 << n); ++i)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define yesNo(b) ((b) ? "Yes" : "No")
using ll = long long;
using ull = unsigned long long;
using ld = long double;
const double pi = 3.141592653589793;
ll smallMOD = 998244353;
ll bigMOD = 1000000007;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> odd, even;
    rep(i, n)
    {
        if (a[i] % 2 == 0)
        {
            even.push_back(a[i]);
        }
        else
        {
            odd.push_back(a[i]);
        }
    }
    sort(all(even));
    reverse(all(even));
    sort(all(odd));
    reverse(all(odd));
    if (odd.size() < 2 && even.size() < 2)
    {
        cout << -1 << endl;
        return 0;
    }
    if (odd.size() < 2)
    {
        cout << even[0] + even[1] << endl;
        return 0;
    }
    if (even.size() < 2)
    {
        cout << odd[0] + odd[1] << endl;
        return 0;
    }
    cout << max(odd[0] + odd[1], even[0] + even[1]) << endl;
    return 0;
}