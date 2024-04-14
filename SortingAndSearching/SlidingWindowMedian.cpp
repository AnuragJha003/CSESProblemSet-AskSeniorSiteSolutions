#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl ("\n")
#define int long long
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define rep(i,n) for(int i=0;i<n;i++)
#define ar array
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
//oset<int>s:s.find_by_order(k):Kth element in "s",s.order_of_key(k):Number of item strictly lessthan k
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
 
signed main(){
	 int n,k;cin>>n>>k;
	 vector<int> values(n);
	 for(int i=0;i<n;i++)cin>>values[i];
	 oset<pair<int,int>> window;
	 for(int i=0;i<k;i++)window.insert({values[i],i});
	 cout<<window.find_by_order((k-1)/2)->first<<" ";
	 for(int i=1;i<n-k+1;i++){
		 window.erase({values[i-1],i-1});
		 window.insert({values[i+k-1],i+k-1});
		 cout<<window.find_by_order((k-1)/2)->first<<" ";
	 }
 }
