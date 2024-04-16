#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<ll>>;
const int inf = INT_MAX / 2;
const ll infl = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
#define rep(i,n) for (int i = 0; i < (n); ++i)
const vector<int> dx = {1, 0, -1, 0};
const vector<int> dy = {0, 1, 0, -1};

string S;
ll ans=0;


int main() {
  cin >> S;
  ll size=S.size();
  ll tmp=0;
  for (int i = 0; i < size; ++i) {
    char a=S[i]-'A'+1;
    // cout<<a<<endl;
    ans=ans*26+a;
  }
      cout << ans << endl;
}