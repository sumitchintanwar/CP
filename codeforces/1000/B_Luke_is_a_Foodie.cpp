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
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<pair<ll, ll>> segment(n + 1);
        for (ll i = 0; i < n; i++)
        {
            segment[i] = {a[i] - x, a[i] + x};
        }
        ll l = segment[0].first;
        ll r = segment[0].second;

        ll res = 0;
        for (ll i = 1; i < n; i++)
        {
            l = max(l, segment[i].first);
            r = min(r, segment[i].second);

            if (l > r)
            {
                res++;
                l = segment[i].first;
                r = segment[i].second;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
