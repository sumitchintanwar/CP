#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    vector<ll> vis(n + 1);
    vector<ll> res;

    pq.push(1);
    vis[1] = 1;
    while (!pq.empty())
    {
        ll node = pq.top();
        pq.pop();
        res.push_back(node);
        for (ll nbr : adj[node])
        {
            if (!vis[nbr])
            {
                pq.push(nbr);
                vis[nbr] = 1;
            }
        }
    }

    for (ll x : res)
    {
        cout << x << ' ';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
