#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll w, vector<ll> &s, ll c)
{
    ll sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (2 * w + s[i]) * (2 * w + s[i]);
        if (sum > c)
        {
            return false;
        }
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

        vector<ll> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        ll l = 1;
        ll r = 1e9;
        ll res = -1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (check(mid, s, c))
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
