#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define ll long long

void solve()
{
    ll a,b,c;
    cin >> a >> b >> c; 

    ll maxi = max(a,b);

    vector<ll> v;
    for(ll i=1;i<=maxi;i++){
        if(a%i==0 && b%i==0){
            v.push_back(i);
        }
    }

    // to find the kth largest we will look from back 

    ll s = v.size();

    cout << v[s-c] << endl;
}

int main()
{
    fast_io();

   solve();

    return 0;
}