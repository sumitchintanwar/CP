#include <bits/stdc++.h>
using namespace std;

// using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> adj(n + 1);
    vector<int> deg(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back({v, i});
        adj[v].push_back({u, i});
        deg[u]++;
        deg[v]++;
    }
    int root = -1;
    for (int i = 1; i <= n; i++) {
        if (deg[i] >= 3) {
            root = i;
            break;
        }
    }

    vector<int> res(n - 1, -1);
    if (root == -1) {
        for (int i = 0; i < n - 1; i++) {
            res[i] = i; 
        }
    }
    else {
        int curr = 0;
        for (auto e : adj[root]) {
            res[e.second] = curr++;
        }
        for (int i = 0; i < n - 1; i++) {
            if (res[i] == -1) {
                res[i] = curr++;
            }
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        cout << res[i] << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
