#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<vector<ll>> adj;
vector<ll> sizeArray;

void dfs(ll u, ll parent)
{
    sizeArray[u] = 1;
    for (int v : adj[u])
    {
        if (v == parent)
        {
            continue;
        }
        dfs(v, u);
        sizeArray[u] += sizeArray[v];
    }
}
void solve()
{
    ll n;
    cin >> n;

    adj.assign(n + 1, {});
    for (int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (n % 2)
    {
        cout << "-1\n";
        return;
    }

    sizeArray.assign(n + 1, 0);
    dfs(1, -1);

    ll res = 0;
    for (ll i = 2; i <= n; i++)
    {
        if (sizeArray[i] % 2 == 0)
        {
            res++;
        }
    }
    cout << res << '\n';
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
