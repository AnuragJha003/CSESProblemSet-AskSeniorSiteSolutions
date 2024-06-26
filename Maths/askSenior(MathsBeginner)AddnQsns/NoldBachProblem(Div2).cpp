#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;


//using namespace __gnu_pbds;
using namespace std;
//typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
//template<typename T>
//using oset = __gnu_pbds::tree<T,__gnu_pbds::null_type,less<T>,__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>;
 
/*** Typedef ***/
typedef int ll;
typedef long long int lli;
typedef unsigned long long ull;
typedef    long double   ld;
 
//typedef    unordered_set<ll>   usll;
typedef    unordered_multiset<ll,ll>   umsll;
/* Special functions: 
 
        find_by_order(k) --> returns iterator to the kth largest element counting from 0
        order_of_key(val) --> returns the number of items in a set that are strictly smaller than our item
*/
/*** Loops ***/
#define ffit(i, dat)    for (__typeof(dat.begin()) i = dat.begin(); i != dat.end(); ++i)
#define fr(i,a,b) for(ll i = a; i <= b; i++)
#define f(i,a,b) for(ll i = a; i < b; i++)
#define F(i,a,b) for(ll i = b-1; i >= a; i--)
#define ff3(i,a,b,m) for(ll i = a; i <b; i+=m)
#define f0(b) for(ll i=0;i<(b);i++)
#define f00(b) for(ll j=0;j<(b);j++)
#define f1(b) for(ll i=1;i<=(b);i++)
#define f11(b) for(ll j=1;j<=(b);j++)
#define f2(a,b) for(ll i=(a);i<=(b);i++)
#define f22(a,b) for(ll j=(a);j<=(b);j++)
#define ipar(ar,n) vll ar(n); ff1(i,0,n) cin>>ar[i];
#define op(x) cout<<x<<kl;
#define ol(x) cout<<x<<" ";
#define vo(ar,n) f(i,0,n) cout<<ar[i]<<" ";
/*** Define Values ***/
 
#define PI acos(-1.0)
#define eps 1e-7
#define size1 15
 
/*** STLs ***/
#define sf(a)            scanf("%lld",&a)
#define sff(a,b)         scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define cu continue
#define br break
#define rsz resize
#define ins insert
#define ft front
#define bk back
#define bb begin
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define ff first
#define ss second
#define rr return
#define sqr(x)           (x)*(x)
#define nxt   next_permutation
#define mp make_pair
#define mem(name, value) memset(name, value, sizeof(name))
#define MN3(n1,n2,n3) min(n1,min(n2,n3))
#define MN4(n1,n2,n3,n4) min(n1,min(n2,min(n3,n4)))
#define MX3(n1,n2,n3) max(n1,max(n2,n3))
#define MX4(n1,n2,n3,n4) max(n1,max(n2,max(n3,n4)))
#define mxar(a,n) *max_element(a,a+n)
#define mnar(a,n) *min_element(a,a+n)
#define arr_sm(a,n) accumulate(a,a+n,0)
#define vc_sm(ve) accumulate(ve.begin(),ve.end(),0)
#define mx_vc(ve) *max_element(ve.begin(),ve.end())
#define mn_vc(ve) *min_element(ve.begin(),ve.end())
//#define endl " \n"
 
/*** STLs ***/
typedef vector <ll> vll;
#define vvll vector<vll>
typedef set <ll> sll;
typedef multiset <ll> msll;
//typedef multimap <ll> mpll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll, ll> > vpll;
typedef set <pair <ll, ll> > spll;
typedef priority_queue <pair <ll, ll> > pqpll;
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define maxpq priority_queue<ll>
#define minpq priority_queue<ll, vector<ll>, greater<ll> >
#define ml unordered_map<ll,ll>
///typedef    unordered_multiset<int>   umsi;
typedef    unordered_set<ll>   us;
 
 
///vector<vector<int>> v(10, vector<int>(20,500)); 2d vector initialization. of 10 rows and 20 columns, with value 500.
 
/*** Sorts ***/
#define czero(n)                    __builtin_popcountll(n) // count the number of 1's in the bit representation of a number
#define cenzero(n)                  __builtin_ctzll(n) // count the number of zereos from the end of the bit representation of a number until a 1
#define countbegzero(n)             __builtin_clzxll(n)
#define checkparity(n)              __builtin_parityll(n)// checks whether the number of bits are even or odd
#define unset(x, i) (x & ~(1 << i))
#define set(x, i) (x | ((1 << i)))
#define check(x, i) (x & (1 << i))
#define all(v) (v).begin(), (v).end()
#define rev(v) reverse(all(v))
#define srt(v) sort(all(v))
#define srtgrt(v) sort(all(v), greater<ll>())
#define prsrt greater<pair<int,int>>()
/*** Some Prints ***/
#define ip(n) ll n; cin>>n;
#define is(s) string s; cin>>s;
#define ic(s) char s; cin>>s;
#define in(n) cin>>n;
#define inn(n,m) cin>>n>>m;
#define ipp(n,k) ll n; cin>>n; ll k; cin>>k;
#define ip3(n,m,k) ll n; cin>>n;ll m;cin>>m; ll k; cin>>k;
#define kl    '\n'
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define ps(x,y)         fixed<<setprecision(y)<<x
#define inf             1e18
#define w(x)             ll x; cin>>x; while(x--)
#define go(i, a) for (auto &i : a)
#define go1(it, v) for(auto it = v.begin(); it != v.end(); ++it)
//#define mk(arr,n,type) type *arr=new type[n];
#define sz(obj) (int(obj.size()))
#define vii(vc,n) vll vc(n+5); f(i,1,n+1){cin>>vc[i];}
#define vi(vc,n) vll vc; f(i,0,n){ip(x);vc.pb(x);}
#define vI(vc,n) f(i,0,n){ip(x);vc.pb(x);}
#define ai(vc,n) f(i,1,n+1){cin>>vc[i];}
#define cer cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#define depressed()                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//bool ans = all_of(arr, arr + 6, [](int x) {return x & 1; } );
const double pi = 3.141592653589793238460;
void ama(ll &a,ll &b){a = max(a,b);}
void amm(ll &a,ll &b){a = min(a,b);}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
#define TRC
#ifdef TRC
#define trc(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trc(...)
#endif
#define case cout << "Case " << tc++ << ": ";
ll tc = 1;
//const ll mod = 1e9+7;
const ll N = 1e4 + 5;
ll dx[4]={0, 0, +1, -1};
ll dy[4]={+1, -1, 0, 0};
  vll prime;vll primes;
        void seive(ll N)
        {
            prime.resize(N+1,0);
            prime[1] = 1;
           for(ll i = 4;i<=N;i+=2) prime[i] =1; 
           for(ll i = 3;i*i<=N;i+=2){
            if(prime[i] == 0)
            {
              for(ll j = i*i;j<=N;j+=2*i){
                prime[j] = 1;
              }
            }
           }
           for(ll i = 2;i<=N;i++){
            if(prime[i] == 0) primes.pb(i);
           }
        }
        ll is_prime(ll n)
    {
      if(n<=1e6) return prime[n];
      for(auto i: primes){
        if(i>sqrt(n)) return 0;
        if(n%i == 0) return 1;
      }
      return 0;
    }
    mll primefactors(ll n)
    {
      mll v;
      ll pf_idx = 0,pf = primes[pf_idx];
      while(pf*pf<=n)
      {
        while(n%pf == 0)
        {
          n/=pf;
          v[pf]++;
        }
        pf = primes[++pf_idx];
      }
      if(n!=1) v[n]++;
      return v;
    }

void fun()
{
  seive(N);
 ipp(n,k);
 ll ct = 0;
 f(i,0,sz(primes)-1){
 	ll x = primes[i]+primes[i+1]+1;
 	if(x>n) cu;
 	if(is_prime(x) == 0){
 		ct++;
 	}
 }
 if(ct>=k){
 	yes;rr;
 }
 no;
}
 
int32_t main()
{
// tasklist
// taskkill /f /im a.exe
    depressed();
  ll tc1 = 1;
  //cin>>tc1;
  while(tc1--)
  {
     fun();
  }
  //cer;
  return 0;
}
					 	      		   			  		   			