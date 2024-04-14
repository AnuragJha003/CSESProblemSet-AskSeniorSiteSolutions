#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

int n, x;

int main(){
    fastio

    cin >> n >> x;
    for(int i=0, a; i<n; i++){
        cin >> a;
        if(a==x){
            cout << i+1 << '\n';
            return 0;
        }
    }
}