#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long

void solve()
{
    int n;
    cin >> n; 
    int count =0;
    for(int i=0;i<n;i++){
        ll num;
        cin >> num; 
        if(num&1){
            count++;
        }
    }

    if(count%2==0){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
}

int main()
{
    fast_io();

    // Test cases
    solve();

    return 0;
}