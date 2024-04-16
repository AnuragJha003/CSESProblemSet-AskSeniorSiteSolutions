#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll INF = 1LL << 60;

int main() {
  ll A,B,C,D,E,F,a,b,c,d,e,f,g,h,i,j;
  cin>>A>>B>>C>>D>>E>>F;
  a=A%998244353;
  b=B%998244353;
  c=C%998244353;
  d=D%998244353;
  e=E%998244353;
  f=F%998244353;
  g=((a*b)+998244353)%998244353;  //+mod % mod
  h=((g*c)+998244353)%998244353;
  i=((d*e)+998244353)%998244353;
  j=((i*f)+998244353)%998244353;
  cout<<(h-j+998244353)%998244353;
  return 0;
}