#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int s = 0;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        for(int k=1; k<=n; k++){
            s += __gcd(i, __gcd(j, k));
        } 
      } 
    } 

    cout << s << '\n';
    return 0;
}