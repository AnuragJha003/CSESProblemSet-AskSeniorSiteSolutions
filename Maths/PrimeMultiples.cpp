#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;


int main(){
ll n;int k;cin>>n>>k;
ll prime[k];
for(int i=0;i<k;i++){
cin>>prime[i];
}
ll ans=0;
for(int i=1;i<(1<<k);i++){
ll temp=n;
int countsets=0;
for(int j=0;j<k;j++){
if(i&(1<<j)){
countsets++;
temp/=prime[j];
}
}
if(countsets&1) ans+=temp;
else ans-=temp;
}
cout<<ans<<endl;
return 0;
}