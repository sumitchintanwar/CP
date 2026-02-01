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
        ll mod = 1e9 + 7;
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b.rbegin(), b.rend());
        ll res = 1;
        for (int i = 0; i < n; i++)
        {
            ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            ll cnt = a.size() - temp;

            res = res * max(cnt - i, 0LL) % mod;
        }

        cout << res << "\n";
    }

    return 0;
}
