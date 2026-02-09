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
        ll n, x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += (a[i] / x) * y;
        }
        ll res = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            ll send = (a[i] / x) * y;
            ll curr = a[i] + total - send;

            res = max(res, curr);
        }
        cout << res << "\n";
    }

    return 0;
}
