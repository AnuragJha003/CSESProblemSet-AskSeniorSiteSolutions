#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios :: sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    bool ok = false;
    for(a;a <= 23;a ++){ 
      for(b;b <= 59;b ++){
        int t = a%10,s = b%100 - b%10;
        int aa = a-t+s/10,bb = b-s+10*t;
        // cout << aa <<" " << bb << "\n";
        if( aa >= 0 && aa <= 23 && bb <= 59 && bb >= 0) {
          ok = true;
          cout << a << " " << b <<"\n";
          break;
        }
      }
      b = 0;
      if(ok) {
        break;
      }
    }
    if(!ok){
      cout << a % 24 << " " <<"00\n";
    }
    return 0;
}