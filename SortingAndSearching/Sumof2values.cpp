#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x;cin>>n>>x;
vector<int> a(n);
map<int,int> mp;
for(int i=1;i<=n;i++){
cin>>a[i];
}
for(int i=1;i<=n;i++){
if(mp.count(x-a[i])){
cout<<mp[x-a[i]]<<" "<<i<<endl;
return 0;
}
mp[a[i]]=i; //index of the element a[i]
}
cout<<"IMPOSSIBLE"<<endl;
return 0;
}
