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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(m, vector<ll>(n));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[j][i];
            }
        }
        ll res = 0;
        for (ll i = 0; i < m; i++)
        {
            sort(a[i].begin(), a[i].end());

            for (ll j = 0; j < n; j++)
            {
                res = res + (a[i][j] * j) - (a[i][j] * (n - j - 1));
            }
        }
        cout << res << "\n";
    }

    return 0;
}
