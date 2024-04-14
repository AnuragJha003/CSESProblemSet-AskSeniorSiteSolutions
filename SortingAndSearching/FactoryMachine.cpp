#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
int n,t;cin>>n>>t;
vector<int> k(n);
for(int i=0;i<n;i++)cin>>k[i];
int lo=0;int hi=*min_element(k.begin(),k.end()) * t;
//binary search on min time max possible  min will be when all are made by the smallest time factory 
int ans=hi;//we want to minimize this
while(lo<=hi){
int mid=lo+(hi-lo)/2;
int cnt=0;
for(int i=0;i<n;i++){
cnt+=mid/k[i];
}//time taken for the entire and cnt is the number of products being made in that time 
if(cnt>=t){
ans=mid;hi=mid-1;
}
else{
lo=mid+1;
}
}
cout<<ans<<endl;
}