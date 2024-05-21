#include<bits/stdc++.h>
using namespace std;
#define int long long;

signed main(){
int t;cin>>t;
while(t--){
int n;cin>>n;vector<int> v(n);
for(int i=0;i<n;i++)cin>>v[i];
sort(v.begin(),v.end());
int ans=0;
for(int k=n;k>=0;k--){
int cnt=0;
int k1=k;vector<int> res=v;
int lo=0;int hi=n-1;
int step=1;
while(hi>=lo){
int req=k1+1-step;
while(res[hi]>req)hi--;
if(step>=k)ans=k;
if(hi<0 || hi<lo)break;
if(res[hi]<=req){
//remove a smaller element 
hi--;//alice khel gya 
res[lo]+=req;//bob khel gya add to a arbitrary small element 
lo++;
step++;
}
}
if(step>=k+1){
ans=max(ans,k);break;
}
}
cout<<ans<<endl;
}
}