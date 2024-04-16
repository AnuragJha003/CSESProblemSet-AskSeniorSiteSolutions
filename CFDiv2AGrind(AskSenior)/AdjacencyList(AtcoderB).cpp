#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n,m,a,b,len;
  cin>>n>>m;
  vector<vector<ll>> ab(n);
  for(ll i=0;i<m;++i){
    cin>>a>>b;
    ab[a-1].push_back(b);
    ab[b-1].push_back(a);
  }
  for(ll i=0;i<n;++i){
    sort(ab[i].begin(),ab[i].end());
  }
  for(ll i=0;i<n;++i){
    len=ab[i].size();
    cout<<len<<" ";
    for(ll j=0;j<len;++j){
      cout<<ab[i][j]<<" ";
    }
    cout<<endl;
  }
}