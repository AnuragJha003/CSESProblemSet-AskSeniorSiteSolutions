#include<bits/stdc++.h>
using namespace std;
int read(){int x;cin>>x;return x;}
int s[100050];
//since it consists of only 1 and 2 in here 
//number of 2 in the first half will be equal to number of 2 in the second half for same product 

void solve(){
int n=read();
for(int i=1;i<=n;++i){s[i]=s[i-1]+(read()>>1);}
for(int i=1;i<=n-1;++i)
if(s[i]==s[n]-s[i]){ cout<<i<<"\n";return ;
}
cout<<"-1\n";
}
int main(){
int test_case=read();
while(test_case--) solve();
return 0;
}
//same number of 2 in 1 to k and k+1 to n 