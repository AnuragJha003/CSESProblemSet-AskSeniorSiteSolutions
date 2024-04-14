#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...) 3
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      cout << a << ' ';
    }
  }
}