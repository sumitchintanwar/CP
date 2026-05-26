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

        vector<ll> closest(n + 2, n + 1);
        for (ll i = 0; i < m; i++)
        {
            ll a, b;
            cin >> a >> b;
            ll l = min(a, b);
            ll r = max(a, b);
            closest[l] = min(closest[l], r);
        }
        for (ll i = n - 1; i >= 1; i--)
        {
            closest[i] = min(closest[i], closest[i + 1]);
        }

        ll res = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll maxi = min(closest[i] - 1, n);
            if (maxi >= i)
            {
                res += maxi - i + 1;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
