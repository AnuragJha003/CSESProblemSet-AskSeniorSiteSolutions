#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> c(n);
    for(int i = 0;i < n;i++)
    {
        cin >> c[i];
    }
    int d = a + b;
    for(int i = 0;i < n;i++)
    {
        if(c[i] == d)cout << i + 1 << endl;
    }
}