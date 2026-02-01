#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> pairs[1001];

    for (ll i = 1; i <= 1000; i++)
    {
        for (ll j = 1; j <= 1000; j++)
        {
            if (gcd(i, j) == 1)
            {
                pairs[i].push_back(j);
            }
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> ind(1001, 0);
        for (int i = 1; i <= n; i++)
        {
            ll a;
            cin >> a;
            ind[a] = i;
        }

        ll res = -1;
        for (ll i = 1; i <= 1000; i++)
        {
            if (ind[i] == 0)
            {
                continue;
            }
            for (ll j : pairs[i])
            {
                if (ind[j] != 0)
                {
                    res = max(res, ind[i] + ind[j]);
                }
            }
        }

        cout << res << "\n";
    }

    return 0;
}
