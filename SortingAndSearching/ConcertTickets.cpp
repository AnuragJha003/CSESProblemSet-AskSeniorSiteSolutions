#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;cin>>n>>m;
multiset<int> h;
while(n--){
int x;cin>>x;
h.insert(x);
}//price of tickets inserted in the multiset 
while(m--){ //max price they can pay 
int x;cin>>x;
auto it=h.upper_bound(x);//upper bound of x in the multiset 
int ans=-1;
if(it!=h.begin()){
--it;
ans=*it;//storing the value of the  iterator at that positon
h.erase(it);//removing the elmnt already considered
}
cout<<ans<<endl;
}
return 0;
}
