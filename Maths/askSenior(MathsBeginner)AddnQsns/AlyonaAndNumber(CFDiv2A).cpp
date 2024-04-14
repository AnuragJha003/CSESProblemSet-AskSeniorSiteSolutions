#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
int n,m;cin>>n>>m;
int a[5]={0};int b[5]={0};
for(int i=1;i<=n;i++)a[i%5]++;
for(int i=1;i<=m;i++)b[i%5]++;
int ans=0;
for(int i=0;i<5;i++){
if(i==0) ans+=a[i]*b[i];
else ans+=a[i]*b[5-i];
}
cout<<ans<<endl;
}
signed main(){
solve();
}