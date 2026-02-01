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
        ll n, k, a, b;
        cin >> n >> k >> a >> b;

        vector<ll> x(n + 1);
        vector<ll> y(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i] >> y[i];
        }

        ll res = abs(x[a] - x[b]) + abs(y[a] - y[b]);
        ll miniA = 1e18;
        ll miniB = 1e18;

        for (int i = 1; i <= k; i++)
        {
            miniA = min(miniA, abs(x[a] - x[i]) + abs(y[a] - y[i]));
            miniB = min(miniB, abs(x[b] - x[i]) + abs(y[b] - y[i]));
        }

        res = min(res, miniA + miniB);
        cout << res << "\n";
    }

    return 0;
}
