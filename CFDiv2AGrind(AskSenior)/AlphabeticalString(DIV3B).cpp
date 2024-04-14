#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
//....................................................
struct hash_fun { static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31); }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM); } };

#define ordered_set tree < ll, null_type, less < ll, rb_tree_tag, tree_order_statistics_node_update >
// less_equal:    asc.  not_unique, st.order_of_key(k) --> no. of items < k,  less: unique
// greater_equal: desc. not_unique, st.order_of_key(k) --> no. of items > k,  greater: unique
// *st.find_by_order(k) --> set[k]

typedef     priority_queue < long long >                                                 maxpq;
typedef     priority_queue < long long, vector < long long >, greater < long long > >    minpq;
//....................................................
#define     boost                  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define     precision(a)           cout << fixed << setprecision(a)
#define     alo                    cout << "alooooooo men?" << endl
#define     YES                    cout << "YES" << endl
#define     Yes                    cout << "Yes" << endl
#define     yes                    cout << "yes" << endl
#define     NO                     cout << "NO" << endl
#define     No                     cout << "No" << endl
#define     no                     cout << "no" << endl
#define     ne                     cout << -1 << endl
#define     retire                 return 0
#define     endl                   "\n"
//....................................................
using i64 = long long; using ll  = long long; using ld  = long double;
using ull = unsigned long long; using lli = long long int; using i32 = int;
// #define int ll
//....................................................
#define _ceil(a, b) (((ll)(a) + (ll)(b - 1)) / (ll)(b))
#define _floor(a, b) (a / b)
#define _round(a, b) ((a + (b / 2ll)) / b)
//....................................................
#define     all(x)                 x.begin(), x.end()
#define     rall(x)                x.rbegin(),x.rend()
//#define     mp                     make_pair
//....................................................
const ld  PI  = 3.141592653589793238462643383279;  // acos(-1)s
const ll MOD  = (ll) 2e5 + 10;
const ll MX  = (ll) INT_MAX;
//....................................................
int ddx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int ddy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
//....................................................
ll isPrime(ll n) { if(n == 0 || n == 1) { return 0; } for(ll i = 2; i * i <= n; i++) { if(n % i == 0) return 0; } return 1; }
bool Sort_Second_Ascending(const pair <ll, ll> &a, const pair < ll, ll > &b) { if(a.second == b.second) { return a.first <  b.first; } else { return (a.second < b.second); } }
bool Sort_Second_Descending(const pair <ll, ll> &a, const pair < ll, ll > &b) { if(a.second == b.second) { return a.first >  b.first; } else { return (a.second > b.second); } }
struct Sort_Second_Ascending_priority_queue { constexpr bool operator()( pair < ll, ll > const& a, pair < ll, ll > const& b) const noexcept { return a.second > b.second; } };
struct Sort_Second_Descending_priority_queue { constexpr bool operator()( pair< ll, ll > const& a, pair < ll, ll > const& b) const noexcept { return a.second < b.second; } };
struct point2D { ll x, y; }; struct point3D { ll x, y, z; }; struct point4D { ll x, y, z, t; };
//....................................................
///____________________________________________ Have a sad time! ____________________________________________________________
void solve()
{

    string s; cin >> s;
    ll sz = (ll)s.size();

    char nxt = 'a' + sz - 1;

    ll l = 0, r = sz - 1;
    while(l <= r)
    {
        if(s[l] == nxt)
        { l++; nxt--; }
        else if(s[r] == nxt)
        { r--; nxt--; }
        else
        {
            NO;
            return;
        }
    }

    YES;




    return;
}


signed main()
{

    boost;
    //freopen("mex.in","r",stdin);
    //precision(10);
    i32 _ = 1; cin >> _;
    while(_--) solve();
    retire;
}