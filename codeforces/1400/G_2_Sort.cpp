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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<bool> ok(n, false);

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < 2 * a[i + 1])
            {
                ok[i] = true;
            }
        }

        ll cnt = 0;
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            if (ok[i])
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            if (cnt >= k)
            {
                res++;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
