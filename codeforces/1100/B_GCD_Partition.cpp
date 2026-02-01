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
        ll res = 0;
        ll total = 0;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        };
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += a[i];
            res = max(res, gcd(total - sum, sum));
        }
        cout << res << "\n";
    }

    return 0;
}
