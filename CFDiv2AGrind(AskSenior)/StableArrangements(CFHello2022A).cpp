#include<bits/stdc++.h>
#define pb(element) push_back(element)
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//#define int long long
using namespace std;
const int mode = 1e9 + 7;
const int maxn = 2e5 + 10;
void solve(){
    int n, k, ppx = 0, ppy = 0;
    cin >> n >> k;
    // cout << ceil(double(n) / 2) <<'\n';
    if(ceil(double(n) / 2) < k){
        cout << "-1" << '\n';
        return ;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == ppx && j == ppy && k > 0){
                cout << "R";
                k--;
                ppx += 2;
                ppy += 2;
            }
            else cout << ".";
        }
        cout << '\n';
    }
}
signed main(){
    fast int casen = 1;
    cin >> casen;
    while(casen--) solve();
}