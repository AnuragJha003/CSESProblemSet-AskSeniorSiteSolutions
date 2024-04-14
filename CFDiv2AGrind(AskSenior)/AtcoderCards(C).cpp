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
  
  string s, t;
  cin >> s >> t;

  int e1 = 0, e2 = 0;
  vector<int> cnt(26);
  for (auto c : s) {
    if (c == '@') e1++;
    else cnt[c - 'a']++;
  }
  for (auto c : t) {
    if (c == '@') e2++;
    else cnt[c - 'a']--;
  }
  bool ans = 1;
  set<char> st{'a', 't', 'c', 'o', 'd', 'e', 'r'};
  for (int i = 0; i < 26; i++) {
    if (cnt[i] > 0) e2 -= cnt[i];
    if (cnt[i] < 0) e1 += cnt[i];
    if (cnt[i] && !st.contains(char('a' + i))) {
      ans = 0;
    }
  }
  cout << (e1 < 0 || e2 < 0 || !ans ? "No" : "Yes");

}