#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
 
 
//----------------------------------------------------------------------------------------------------
 
 
 
void solve(){
   int a,b,c; cin>>a>>b>>c;
 
   int dis = abs(a-b);
 
   int n = 2*dis;
 
   if(a>n || b>n || c>n)
   {
    cout<<"-1"<<endl;
   }
   else{
    if(c+dis <= n)
    {
        cout<<c+dis<<endl;
    }
    else if(c-dis <= n && c-dis > 0)
    {
        cout<<c-dis<<endl;
    }
    else cout<<"-1"<<endl;
   }
    
}
 
 
 
signed main() {
 
ios::sync_with_stdio(false); cin.tie(NULL);
 
int tc; cin >> tc;
while (tc--) {
 
 solve();
 
}
}