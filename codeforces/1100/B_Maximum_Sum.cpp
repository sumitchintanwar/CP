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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll sum = 0;
        ll res = 0;
        vector<ll> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + a[i];
        }
        for (int i = 0; i <= k; i++)
        {
            int second = k - i;
            int l = 2 * i;
            int r = n - second - 1;

            if (l == 0)
            {
                sum = pref[r];
            }
            else
            {
                sum = pref[r] - pref[l - 1];
            }
            res = max(res, sum);
        }
        cout << res << "\n";
    }

    return 0;
}
