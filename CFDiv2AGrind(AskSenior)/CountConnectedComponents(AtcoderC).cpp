#include <iostream>
#include <vector>
using namespace std;

class DisjointSet {
private:
    vector<int> parent;
    vector<int> rank;

public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            parent[i] = i;
    }

    int find(int u) {
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }

    void merge(int u, int v) {
        int pu = find(u);
        int pv = find(v);
        if (pu == pv) return;
        if (rank[pu] < rank[pv])
            parent[pu] = pv;
        else if (rank[pu] > rank[pv])
            parent[pv] = pu;
        else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    DisjointSet dsu(N);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        dsu.merge(u, v);
    }

    int components = 0;
    for (int i = 1; i <= N; ++i) {
        if (dsu.find(i) == i)
            components++;
    }

    cout << components << endl;

    return 0;
}
