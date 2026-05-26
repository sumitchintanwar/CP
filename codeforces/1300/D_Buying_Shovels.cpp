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

        ll res = n;
        for (ll i = 1; i * i <= n; i++)
        {
            if (i > k)
            {
                break;
            }
            if (n % i == 0)
            {
                res = min(res, n / i);

                if (n / i <= k)
                {
                    res = min(res, i);
                }
            }
        }
        cout << res << "\n";
    }

    return 0;
}
