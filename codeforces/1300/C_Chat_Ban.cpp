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
        ll k, x;
        cin >> k >> x;

        ll req = k * k;
        if (x >= req)
        {
            cout << 2 * k - 1 << "\n";
            continue;
        }

        ll peak = k * (k + 1) / 2;

        if (x <= peak)
        {
            ll s = 1;
            ll e = k;
            ll res = k;

            while (s <= e)
            {
                ll mid = s + (e - s) / 2;
                if (mid * (mid + 1) / 2 >= x)
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
        else
        {
            ll rem = x - peak;
            ll s = 1;
            ll e = k - 1;
            ll res = k - 1;

            while (s <= e)
            {
                ll mid = s + (e - s) / 2;
                if (mid * (2 * k - mid - 1) / 2 >= rem)
                {
                    res = mid;
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            cout << k + res << "\n";
        }
    }

    return 0;
}
