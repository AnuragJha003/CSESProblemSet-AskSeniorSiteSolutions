#include<bits/stdc++.h>
#define ll long long
#define int long long
#define ceil(a,b) ((a+b)-1)/b
#define vi vector<int>
#define ppb pop_back()
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define mod 1e9+7
#define rall(x) (x).rbegin(),(x).rend()
#define input(x) for(auto &a:x) cin >> a;
#define output(x) for(auto a:x) cout << a <<' ';
#define rep(i,n) for(i=0;i<n;i++)
#define end cout << endl;
using namespace std; 

signed main(){
    ll tt = 1;
    cin >> tt;
    while(tt--) {
        int a; cin >> a;
        if(1&a) {
            cout << "Odd\n";
            continue;
        }
        a = a>>1;
        if(1&a) {
            cout << "Same\n";
            continue;
        }
        cout << "Even\n";
    }
    return 0;
}