#include<bits/stdc++.h>
using namespace std;

int main(){
int n;cin>>n;
vector<pair<int,int>> a;
while(n--){
int st,le;
cin>>st>>le;
a.push_back({st,-1});
a.push_back({le,1});
}
int curr=0;int ans=0;
sort(a.begin(),a.end());
for(auto x:a){
if(x.second==-1){
curr++;
}//someone is entering 
else curr--; //someone is leaving so --
ans=max(ans,curr);
}
cout<<ans<<endl;
return 0;
}
