#include <bits/stdc++.h>
using namespace std;
char s[200002];
bool d[200001];
int n, len = 0;
int main() {
    scanf("%d%s", &n, s + 1);
    bool flag = true;
    int t;
    memset(d, false, sizeof(d));
    for (int i = 1; i <= n; i++)
        if (s[i] == '"' && flag)
            t = i, flag = false;
        else {
            if (s[i] == '"') {
                for (int j = t; j <= i; j++)
                    d[j] = true;
                flag = true;
            }
        }
    for (int i = 1; i <= n; i++)
        if (!d[i] && s[i] == ',')
            s[i] = '.';
    printf("%s\n", s + 1);
}