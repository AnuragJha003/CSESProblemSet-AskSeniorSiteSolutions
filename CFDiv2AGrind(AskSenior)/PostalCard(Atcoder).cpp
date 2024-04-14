#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    for (int j = 0; j < m; ++j) {
        cin >> t[j];
    }
    int answer = 0;
    for (int i = 0; i < n; ++i) {
        string suffix = s[i].substr(3);
        bool match = false;
        for (int j = 0; j < m; ++j) {
            if (suffix == t[j]) {
                match = true;
            }
        }
        if (match) {
            answer += 1;
        }
    }
    cout << answer << '\n';
    return 0;
}
