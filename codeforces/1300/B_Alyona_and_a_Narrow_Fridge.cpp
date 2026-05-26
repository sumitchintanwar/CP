#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll res = 0;
        ll s = 1;
        ll e = n;
        while (s <= e)
        {
            ll sum = 0;
            ll mid = s + (e - s) / 2;
            vector<ll> b(a.begin(), a.begin() + mid);
            sort(b.begin(), b.end());

            for (int i = mid - 1; i >= 0; i -= 2)
            {
                sum += b[i];
            }
            if (sum <= h)
            {
                res = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
