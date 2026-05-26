#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void dfs(ll node, ll parent, ll last_edge, ll reads, ll &ans, vector<vector<pair<ll, ll>>> &adj)
{
    ans = max(ans, reads);
    for (auto it : adj[node])
    {
        ll dest = it.first;
        ll ind = it.second;
        if (dest == parent)
        {
            continue;
        }
        if (ind <= last_edge)
        {
            dfs(dest, node, ind, reads + 1, ans, adj);
        }
        else
        {
            dfs(dest, node, ind, reads, ans, adj);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<vector<pair<ll, ll>>> adj(n + 1);
        for (ll i = 1; i <= n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back({v, i});
            adj[v].push_back({u, i});
        }

        ll ans = 1;

        dfs(1, 0, 0, 1, ans, adj);

        cout << ans << "\n";
    }

    return 0;
}
