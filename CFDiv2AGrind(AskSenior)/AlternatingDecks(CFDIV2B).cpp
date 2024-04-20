#include <bits/stdc++.h>

using namespace std;

int main() {
    int NT;
    cin >> NT;

    for (int T = 0; T < NT; ++T) {
        int n;
        cin >> n;

        int answer[4] = {0, 0, 0, 0};
        int first_card = 1;

        for (int it = 1; it < 20000; ++it) {
            int who = (it % 4 == 1 || it % 4 == 0) ? 0 : 1;
            int cnt = it;

            if (n < cnt) {
                cnt = n;
            }

            int cnt_white = (cnt + first_card % 2) / 2;
            int cnt_black = cnt - cnt_white;

            answer[who * 2 + 0] += cnt_white;
            answer[who * 2 + 1] += cnt_black;

            first_card += cnt;
            n -= cnt;

            if (n == 0) {
                break;
            }
        }


        for (int i = 0; i < 4; ++i) {
            cout << answer[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
