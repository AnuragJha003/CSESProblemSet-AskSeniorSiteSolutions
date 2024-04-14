#include <bits/stdc++.h>
#include <regex>
#include <cassert>
#include <numeric>
#define rep(i, n) for(ll i=0; i<(n);i++)
#define all(i) begin(i),end(i)
using namespace std;
using Graph = vector<vector<int>>;
using ll = long long;

int main(){
    string s;cin>>s;
    int ans = 0;
    for (auto v : s){
        ans += ((v=='v') ? 1 : 2);
    }
    cout << ans << endl;
    return 0;
}