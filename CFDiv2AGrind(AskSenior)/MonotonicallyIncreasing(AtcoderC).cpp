#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;

void dfs(int p) {
  if (a.size() == n) {
    for (int i = 0; i < a.size(); i++){
      cout << a[i];
      if (i < n - 1) {
        cout << " ";
      } else {
        cout << "\n";
      }
    }

  } else {
    for (int i = p; i <= m; i++) {
      a.push_back(i);
      dfs(i + 1);
      a.pop_back();
    }
  }
}
int main() {
  cin >> n >> m;
  dfs(1);
  return 0;
}
