#include<bits/stdc++.h>
using namespace std;
#define int long long 


void solve(){
int n;cin>>n;
vector<int> a(n);
vector<pair<int,int>> v;
for(int i=0;i<n;i++){
cin>>a[i];
v.push_back({a[i],i+1});
}
sort(v.begin(),v.end());
int ans=0;
for(int i=0;i<n-1;i++){
int firstval=v[i].first;int firstidx=v[i].second;
for(int j=i+1;j<n;j++){
int secondval=v[j].first;int secondidx=v[j].second;
if(firstval*secondval==firstidx+secondidx){
ans++;
}
else{
if(firstval*secondval>2*n) break;
}
}
}
cout<<ans<<endl;
}

signed main(){
int t;cin>>t;
while(t--){
solve();
}
}