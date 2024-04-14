#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<queue>
#include<math.h>
#include<iomanip>
#include<climits>
#include<unordered_map>
#include<cmath>
#include<array>
#include<numeric>
#include<stack>
#include<deque>
using namespace std;
using ll = long long;

const ll inf = INT_MAX / 2;

ll n;

int main()
{
	cin >> n;
	ll ans = n * (n - 1) / 2;
	map<ll, ll>mp;
	for (int i = 0; i < n; i++)
	{
		ll a;
		cin >> a;
		mp[a]++;
	}
	
	for (auto [a, b] : mp)
		ans -= b * (b - 1) / 2;

	cout << ans;
}