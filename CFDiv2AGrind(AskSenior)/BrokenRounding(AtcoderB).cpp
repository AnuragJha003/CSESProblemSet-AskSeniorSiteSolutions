#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  long long x, k;
  cin >> x >> k;
  long long pow10 = 1;
  for (long long i = 0; i < k; i++){
    x /= pow10;
    long long m = (x % 10);
    if (m <= 4) x -= m;
    else x += 10 - m;
    x *= pow10;
    pow10 *= 10;
    }
  cout << x << endl;
}

int main() {
  solve();
  return 0;
  }