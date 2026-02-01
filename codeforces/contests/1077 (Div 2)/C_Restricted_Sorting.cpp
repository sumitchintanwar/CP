#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool solve(ll k, ll s, ll e, vector<ll> &a, ll mini, ll maxi)
{
    int n = a.size();
    ll largest = -1;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] - mini) < k)
        {
            if (largest != -1 && (largest - a[i]) < k)
            {
                return false;
            }
        }
        if ((maxi - a[i]) < k)
        {
            largest = max(largest, a[i]);
        }
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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool printed = false;
        if (is_sorted(a.begin(), a.end()))
        {
            cout << -1 << endl;
            printed = true;
        }

        ll maxi = *max_element(a.begin(), a.end());
        ll mini = *min_element(a.begin(), a.end());

        ll s = 1;
        ll e = maxi - mini;
        ll res = 0;
        while (s <= e)
        {
            ll mid = s + (e - s) / 2;
            if (solve(mid, s, e, a, mini, maxi))
            {
                res = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        if (!printed)
        {
            cout << res << "\n";
        }
    }

    return 0;
}
