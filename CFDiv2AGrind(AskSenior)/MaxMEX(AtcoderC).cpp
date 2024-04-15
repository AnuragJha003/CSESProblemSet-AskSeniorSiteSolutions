#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define S second
#define F first
#define ii pair<ll, ll>
#define mp make_pair
#define forn(i,n) for(int i=0;i<n;++i)
#define sz size
#define all(x) x.begin(), x.end()
#define S second
#define F first
#define vi vector<int>
#define vll vector<long long>
#define INF 1e9
#define nl cout<<"\n"
#define yes cout<<"Yes\n"
#define no cout<<"No\n"
using namespace std;
 
const long long maxn=1e18;
 
bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first != b.first)
		return a.first > b.first; // Orden descendente por valor
	return a.second < b.second;  // Orden ascendente por índice si los valores son iguales
}

int main()
{
	int N, k; cin>>N>>k;
	set<int> s;
	forn(i,N){int x;cin>>x; s.insert(x);}	
	for(int i=0; i<k; ++i){
		if(s.find(i)==s.end()){cout<<i<<"\n"; return 0;}
	}
	cout<<k<<"\n";
}
