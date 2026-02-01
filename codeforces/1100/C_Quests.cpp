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

        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll res = 0;
        ll sum = 0;
        ll maxi = 0;
        for (int i = 0; i < min(n, k); i++)
        {
            sum += a[i];
            maxi = max(maxi, b[i]);
            res = max(res, sum + (k - (i + 1)) * maxi);
        }
        cout << res << "\n";
    }

    return 0;
}
