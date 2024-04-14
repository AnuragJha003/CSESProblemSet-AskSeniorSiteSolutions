#include <bits/stdc++.h> 
using namespace std;

using str = string; 
using ll = long long;
using ull = unsigned ll;
using ld = long double;

using vi = vector<int>;
using vll = vector<ll>;
using vs = vector<string>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pii = pair<int,int>;
using pll = pair<ll,ll>;
#define f first
#define s second
#define mp make_pair

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); 
	if (sz(name)) {
		freopen((name + ".in").c_str(), "r", stdin); 
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
// 13/04/2024 -> 12:27
// l i+ <= N
// 1<=k<=l S[k]!=S[k+i]
int main(){ 	
   setIO();
   int n; cin>>n;
   str s; cin>>s;
   for(int i = 1; i<n; i++){
   	int l = 0;
   	while(i+l<n){
   		if(s[l]==s[l+i]){
   			break;
   		}
   		l++;
   	}
   	cout<<l<<"\n";
   }
   
}