#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	bool check = false;
	for (int i = 0; i < n - 1; i++) {
		if (s.at(i) == s.at(i + 1)) check = true;
	}

	if (check) cout << "No" << endl;
	else cout << "Yes" << endl;
}