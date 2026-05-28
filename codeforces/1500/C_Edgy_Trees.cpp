#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class DisjointSet
{
public:
    vector<int> rank, parent, size;
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUP(int node)
    {
        if (node == parent[node])
        {
            return node;
        }
        return parent[node] = findUP(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUP(u);
        int ulp_v = findUP(v);

        if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        else if (rank[ulp_v] > rank[ulp_u])
        {
            parent[ulp_u] = ulp_v;
        }
        else
        {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findUP(u);
        int ulp_v = findUP(v);

        if (size[ulp_v] > size[ulp_u])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
const int MOD = 1e9 + 7;

ll power(ll base, ll exp)
{
    ll res = 1;
    base %= MOD;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
void solve()
{

    ll n, k;
    cin >> n >> k;

    DisjointSet ds(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v, x;
        cin >> u >> v >> x;

        if (x == 0)
        {
            ds.unionBySize(u, v);
        }
    }
    ll total = power(n, k);
    ll bad = 0;

    for (int i = 1; i <= n; i++)
    {
        if (ds.findUP(i) == i)
        {
            bad = (bad + power(ds.size[i], k)) % MOD;
        }
    }

    ll ans = (total - bad + MOD) % MOD;

    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
