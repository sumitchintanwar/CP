#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
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

        ll res = INT_MAX;
        ll even = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }

            if (a[i] % k == 0)
            {
                res = 0;
            }

            res = min(res, k - (a[i] % k));
        }

        if (k == 4)
        {
            if (even >= 2)
            {
                res = min(res, 0LL);
            }
            else if (even == 1)
            {
                res = min(res, 1LL);
            }
            else
            {
                res = min(res, 2LL);
            }
        }

        cout << res << endl;
    }

    return 0;
}