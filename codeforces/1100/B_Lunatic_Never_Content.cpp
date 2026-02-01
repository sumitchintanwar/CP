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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            ll diff = abs(a[i] - a[n - i - 1]);
            res = gcd(res, diff);
        }
        cout << res << "\n";
    }
    return 0;
}
