#include  <bits/stdc++.h>
#define int long long
using namespace std;


void solve(){
  int n;  cin>>n;
map<int,int> f;
 for (int i = 2; i*i <= n; i++){
     while (n % i == 0){
         f[i]++;
         n /= i;
      }
 }
 if(n>1)f[n]++;

int ans=0;
while(f.size()>0){
  int pro=1;
 for (auto it = f.begin(); it != f.end(); ) {
            pro *= it->first;
            it->second -= 1;
            if (it->second == 0) {
                it = f.erase(it);
            } else {
                ++it;
            }
        }
ans+=pro;
}
cout<<ans<<'\n';

//130056192 me
//2^15 * 3^4 * 7^2 hai 
}
int32_t main(){
 ios_base::sync_with_stdio(false);  cin.tie(NULL);
    int T = 1;  cin >> T;
    while (T--){
solve();
 }
    return 0; 
}

    