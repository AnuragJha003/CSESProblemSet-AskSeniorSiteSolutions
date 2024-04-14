#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;


int main() {
    int n,q;
    cin >> n >> q;
    vector<int> v(n+1);
    rep(i,q) {
        int a,b;
        cin >> a >> b;
        if (a == 1) v[b]++;
        if (a == 2) v[b]+=2;
        if (a == 3) {
            if (v[b] < 2) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }   
}