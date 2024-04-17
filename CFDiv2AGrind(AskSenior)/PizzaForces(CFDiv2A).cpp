#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long int n; cin >> n;
    if(n < 6){
        cout << "15\n";
        return;
    }
    long long int ans = (n / 6) * 15;
    n = n % 6;
    if(n == 0){
        cout << ans << '\n';
        return;
    }

    if(n <= 2)
        ans += 5;
    else if(n <= 4)
        ans += 10;
    else if(n == 5)
        ans += 15;

    cout << ans << '\n';
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int tt;
    cin >> tt;
    // tt = 1;
    while(tt--) solve();
}