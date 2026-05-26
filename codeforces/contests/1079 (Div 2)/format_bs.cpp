
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll h, vector<ll> &a, ll c)
{
    ll sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += (2 * h + a[i]) * (2 * h + a[i]);
    }
    return sum <= c;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 1;
        ll r = 1e18;
        ll res = INT_MIN;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (check(mid, a, c))
            {
                res = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
