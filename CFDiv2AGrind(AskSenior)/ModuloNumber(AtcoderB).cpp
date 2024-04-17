#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long mod = 998244353;
  long long result = n % mod;

  if (result < 0) {
    result += mod;
  }

  cout << result << "\n";

  return 0;
}
