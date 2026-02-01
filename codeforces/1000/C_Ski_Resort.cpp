#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = (a[i] > q) ? 0 : 1;
        }

        ll ones = 0;
        ll res = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                ones++;
            }
            else
            {
                if (ones >= k)
                {
                    ll diff = ones - k + 1;
                    res += (diff * (diff + 1)) / 2;
                }
                ones = 0;
            }
        }

        if (ones >= k)
        {
            ll diff = ones - k + 1;
            res += (diff * (diff + 1)) / 2;
        }

        cout << res << '\n';
    }
    return 0;
}
