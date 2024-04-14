#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
int n;cin>>n;
vector<int> times(n);
//we observe if max elemnt is  <= the sum of remaining elemnts we observe we don't have to wait for a time to get a book
//for this the min time will be sum 
//if max elemnt> then remaing elmnts means we have to wait for a particular amount of time 
//for this the min time will be 2*max elemnt 
int tot=0;
int mx=0;
for(int i=0;i<n;i++){
cin>>times[i];
mx=max(mx,times[i]);
tot+=times[i];
}
if(mx*2>=tot){
cout<<mx*2<<endl;
}
else cout<<tot<<endl;
}