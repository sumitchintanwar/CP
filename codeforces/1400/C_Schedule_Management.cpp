#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool solve(ll n, unordered_map<ll, ll> &mpp, ll mid, ll m)
{
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mid < mpp[i])
        {
            res += mid;
        }
        else
        {
            res += mpp[i] + (mid - mpp[i]) / 2;
        }
    }
    return res >= m;
}
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

        unordered_map<ll, ll> mpp;
        for (int i = 0; i < m; i++)
        {
            ll temp;
            cin >> temp;
            mpp[temp]++;
        }

        ll s = 0;
        ll e = 2 * m;
        ll res = 0;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            if (solve(n, mpp, mid, m))
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
