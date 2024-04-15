#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <stack>
#include <tuple>
#include <set>
#include <map>
#include <regex>
// #include <bitset>
// #include <cassert>
// #include <atcoder/all>
// #include <unordered_map>
// #include <unordered_set>
// #include <cstdlib>
// #include <cmath>
using namespace std;
// using namespace atcoder;
// using mint = modint998244353;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> g(m);
    rep(i, m){
        int c; cin >> c;
        rep(j, c){
            int a; cin >> a;
            g[i].emplace_back(a);
        }
    }
    int ans = 0;
    rep(i, 1<<m){
        set<int> st;
        rep(j, m){
            if (i&(1<<j)){
                for(int k: g[j]){
                    st.insert(k);
                }
            }
        }
        if (st.size() == n){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}