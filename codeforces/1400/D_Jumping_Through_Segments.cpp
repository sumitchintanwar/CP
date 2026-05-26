#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool solve(ll n, ll k, vector<pair<ll, ll>> &segment)
{
    ll L = 0;
    ll R = 0;

    for (int i = 0; i < n; i++)
    {
        L -= k;
        R += k;
        ll start = max(segment[i].first, L);
        ll end = min(segment[i].second, R);

        if (start > end)
        {
            return false;
        }

        L = start;
        R = end;
    }
    return true;
}
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
        vector<pair<ll, ll>> segment(n);
        for (int i = 0; i < n; i++)
        {
            cin >> segment[i].first >> segment[i].second;
        }

        ll s = 0;
        ll e = INT_MAX;
        ll res = 0;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;

            if (solve(n, mid, segment))
            {
                res = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
