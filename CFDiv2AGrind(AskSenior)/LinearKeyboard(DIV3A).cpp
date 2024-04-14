#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
map <char, int> w;
int t;
void slove() {
	string s;
	for (int i = 1; i <= 26; i ++) {
		char x;
		cin >> x;
		w[x] = i;
	} 
	cin >> s;
	int num = s.length();
	int sum = 0;
	for (int i = 1; i < num; i ++) {
		sum += abs(w[s[i]] - w[s[i - 1]]);
	}
	cout << sum << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		slove(); 
	}
}
 		  				 		  	       	   	 			