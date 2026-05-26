#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

        vector<ll> w(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> w[i];
        }

        vector<vector<ll>> adj(n + 1);
        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<ll> arr;
        ll val = 0;

        for (ll i = 1; i <= n; i++)
        {
            val += w[i];
            ll sz = adj[i].size();
            for (ll j = 0; j < sz - 1; j++)
            {
                arr.push_back(w[i]);
            }
        }

        sort(arr.rbegin(), arr.rend());

        cout << val << ' ';
        for (auto x : arr)
        {
            val += x;
            cout << val << ' ';
        }
        cout << '\n';
    }

    return 0;
}