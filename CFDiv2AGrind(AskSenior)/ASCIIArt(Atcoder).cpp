#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 3
#endif

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, w;
  cin >> h >> w;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      int a;
      cin >> a;
      if (a == 0) {
        cout << '.';
      } else {
        cout << char('A' + a - 1);
      }
    }
    cout << '\n';
  }  
}