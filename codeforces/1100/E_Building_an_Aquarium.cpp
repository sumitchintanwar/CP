#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll h, vector<ll> &a, ll x)
{
    ll units = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (h - a[i] > 0)
        {
            units += h - a[i];
        }
    }
    return units <= x;
}
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
        ll s = 1;
        ll e = 1e10;
        ll res = INT_MIN;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            if (check(mid, a, x))
            {
                res = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
