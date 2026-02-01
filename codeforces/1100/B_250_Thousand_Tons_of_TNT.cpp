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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> pref(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + a[i];
        }
        ll res = 0;
        for (ll k = 1; k <= n; k++)
        {
            if (n % k != 0)
            {
                continue;
            }

            ll mini = -1;
            ll maxi = -1;

            for (ll i = 0; i < n; i += k)
            {
                ll subarraySum = pref[i + k] - pref[i];

                if (maxi == -1)
                {
                    mini = subarraySum;
                    maxi = subarraySum;
                }
                else
                {
                    maxi = max(maxi, subarraySum);
                    mini = min(mini, subarraySum);
                }
            }
            res = max(res, maxi - mini);
        }
        cout << res << "\n";
    }

    return 0;
}
