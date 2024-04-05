// Problem Link: https://codeforces.com/problemset/problem/1843/D
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
vector<int> adj[N];
long long cnt[N];
 
void dfs(int v, int p) {
    if (adj[v].size() == 1 && adj[v][0] == p) {
        cnt[v] = 1;
    } else {
        for (auto u : adj[v]) {
            if (u != p) {
                dfs(u, v);
                cnt[v] += cnt[u];
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            cnt[i] = 0;
        }
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,1);
        int q;
        cin >> q;
        while (q--) {
            int x, y;
            cin >> x >> y;
            cout << cnt[x] * cnt[y] << endl;
        }
    }
    return 0;
}