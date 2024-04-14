
#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp> // everything related to pbds
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef int node; // change type here
// typedef tree<node, null_type, less<node>,
//              rb_tree_tag, tree_order_statistics_node_update> // this is push_backds
//     ordered_set;
#define ll long long
#define int long long
using vi = vector<ll>;
using vpi = vector<pair<ll, ll>>;
#define f_a(arr,it) for(auto it:arr)
#define fr(a,b) for(ll i = a; i < b; i++)
#define fr1(a,b) for(ll i=a;i<=b;i++)
#define frr(b,a) for(ll i = b;i>=a;i--)
typedef long double ld;
#define us  unordered_set<ll>
#define us_pair unordered_set<pair<ll,ll>>
#define mapi map<ll,ll>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(a) (a).rbegin(), (a).rend()
#define lb lower_bound
#define ps(x, y) fixed << setprecision(y) << x
#define modi 1000000007
#define MOD 998244353
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"

ll INF = 1e18;
// ll MOD = 1e9 + 7;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0}; // useful when dealing with points

ll maxx(vi &a)
{
    return (*max_element(a.begin(), a.end()));
}

ll minn(vi &a)
{
    return (*min_element(a.begin(), a.end()));
}

long long gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}

bool isPrime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// mod stuff starts here
long long mod(long long x)
{
    return ((x % MOD + MOD) % MOD);
}
long long add(long long a, long long b)
{
    return mod(mod(a) + mod(b));
}
long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}
// this is mod stuff

void input(vi &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void print(vector<int> &a)
{
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
}

int stringToInt(string s)
{
    stringstream geek(s);
    int x = 0;
    geek >> x;
    return x;
}

bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

bool isPalindrome(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

string binaryTransformation(long long x)
{
    if (x == 0)
        return "";
    else
    {
        string s = binaryTransformation(x / 2);
        s.push_back(char('0' + x % 2));
        return s;
    }
}

// ll power(ll a, ll b, ll mod)
// {
//     if (b == 0)
//     {
//         return 1;
//     }
//     ll ans = power(a, b / 2, mod);
//     ans *= ans;
//     ans %= mod;
//     if (b % 2)
//     {
//         ans *= a;
//     }
//     return ans % mod;
// }

// double power(double a, int b)
// {
//     if (b == 0)
//     {
//         return 1;
//     }
//     double t = power(a, b / 2);
//     if (b & 1)
//     {
//         return t * t * a;
//     }
//     else
//     {
//         return t * t;
//     }
// }

// int modularInverse(int number, int mod)
// {
//     return power(number, mod - 2, mod);
// }

//using binary exponentiation
ll power(ll base, ll exp, ll mod) {
    ll res=1;
    while (exp>0) {
        if (exp%2==1) {
            res *= base;
            res %= mod;
        }
        base *= base;
        base %= mod;
        exp /= 2;
    }
    return res;
}
//modular division
/*
   (a/b) % mod = (a*(inverse of b under mod)) % mod
   (b*(inverse of b under mod)) % mod=1
   from fermats little theorem
   a^p % p = a  (if p is prime)
   a^p-1 % p = 1
   a^p-2 % p = inverse of a under modulo p
   so, inverse of b under modulo mod = b^mod-2 % mod 
*/
//finding nCr using binary exp. , mod div 
const int N = 1000;
 ll fact[N];
 ll invfact[N]; //as these arrays would be called in nCr function

ll modinv(ll base) {
    return power(base,MOD-2,MOD);
}  

void precompute () {
    fact[0] = fact[1] = 1; 
    fr(2,N) {
        fact[i]=fact[i-1]*i;
        fact[i]%=MOD; //If there is a mod given in the problem then use that
    }
    
    for (int i=N-2;i>=0;i--) {
        invfact[i]=modinv(fact[i]);
        invfact[i]%=MOD;
    }

}
//code for finding nCr
ll nCr(ll n, ll r) {
    ll num=fact[n];
    if (r>n) {
        return 0;
    }
    num*=invfact[r];
    num%=MOD;
    num*=invfact[n-r];
    num%=MOD;
    return num;
}

void isprimes (ll n) {

}
// it should be 1LL and not 1
// write more tests
// google if stuck
// take a walk if stuck


void solve()
{
   int n;
   cin >> n;
   vi v(n);
   input(v);
   sort(v.begin(),v.end());
   for (int i=1;i<n;i++) {
    if (v[i]==v[i-1]) {
        v[i] *= -1;
    }
   }
   set<int>s;
   for (int i=0;i<n;i++) {
    s.insert(v[i]);
   }
   cout << s.size() << endl;
}

int32_t main()
{
    // freopen("dishes.in", "r", stdin);
    // freopen("dishes.out", "w", stdout);
    /* stuff you should look for
     * int overflow, array bounds
     * special cases (n==1?)
     * do smth instead of nothing and stay organized
     * WRITE STUFF DOWN
     * DON'T GET STUCK ON ONE APPROACH
     * IF STUCK ON A QUESTION, MOVE TO THE NEXT ONE
     */
    fast_io;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}

