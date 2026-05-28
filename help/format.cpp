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

        // ARRAY INPUT
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string s;
        cin >> s;

        // TWO ARRAYS
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // MATRIX INPUT(n + 1, 0)
        int r, c;
        cin >> r >> c;
        vector<vector<ll>> mat(r, vector<ll>(c));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }

        // PAIRS INPUT
        vector<pair<ll, ll>> vp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vp[i].first >> vp[i].second;
        }

        // GRAPH INPUT
        int m;
        cin >> m;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // MAP / FREQUENCY
        unordered_map<ll, ll> freq;
        for (ll x : a)
        {
            freq[x]++;
        }

        vector<pair<ll, ll>> points(n);
        sort(points.begin(), points.end(),
             [&](pair<ll, ll> a, pair<ll, ll> b)
             {
                 if (a.first != b.first)
                 {
                     return a.first > b.first;
                 }
                 return a.second < b.second;
             });

        cout << "OK\n";
    }

    return 0;
}
