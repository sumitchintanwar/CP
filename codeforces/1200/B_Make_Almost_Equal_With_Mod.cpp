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
        for (int i = 1; i <= 60; i++)
        {
            ll k = 1LL << i; // 2 ^ i
            set<ll> distinct;

            for (ll ind = 0; ind < n; ind++)
            {
                distinct.insert(a[ind] % k);
            }

            if (distinct.size() == 2)
            {
                res = k;
                break;
            }
        }

        cout << res << "\n";
    }

    return 0;
}
