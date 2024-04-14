#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >>n;
	int f=0;
	string s;
	for (int i = 0; i < n; i++){
		cin >>s;
		if(s =="For") f++;
	}
	cout << (n < f*2?"Yes":"No");
}