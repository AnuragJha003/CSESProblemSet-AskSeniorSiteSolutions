#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), r.rend()
#define _lb(v, x) lower_bound(all(v), x)
#define lb(S, x) S.lower_bound(x)
#define _ub(v, x) lower_bound(all(v), x)
#define ub(S, x) S.lower_bound(x)
#define mAx(v) *max_element(v.begin(), v.end())
#define Sum(v) accumulate(v.begin(), v.end(), 0LL)
#define mIn(v) *min_element(v.begin(), v.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define rep(i, a, b) for (int i = a; i < b; i++)
#define pb push_back
#define ff first
#define ss second
#define cnf(p) cout << "@@" << p << endl;
vector<vector<int>> adj;
vector<int> vis;
const int nax = 2e5 + 10;
void Display(vector<int> &v)
{
    for (auto &A : v)
        cout << A << " ";
    cout << endl;
}
void Scan(vector<int> &v)
{
    for (auto &A : v)
        cin >> A;
}
vector<int> get_primes(int n)
{
    vector<int> ans;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            ans.pb(p);
    return ans;
}
int binexp(int a, int b, int MOD)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * 1LL * a) % MOD;
        a = (a * 1LL * a) % MOD;
        b >>= 1;
    }
    return res;
}
void runcase()
{
    string s, test = "";
    cin >> s;
    int n = s.size();
    vector<int> c(26);
    for (int i = 0; i < n; i++)
        c[s[i] - 'a']++;
    int ans = 0, one = 0;
    for (int i = 0; i < 26; i++)
    {
        if (c[i] >= 2)
            ans++;
        else if (c[i])
            one++;
    }
    cout << ans + one / 2 << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        runcase();
    return 0;
}