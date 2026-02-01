#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p;
        cin >> n >> p;

        vector<pair<ll, ll>> v(n);
        vector<ll> a(n), b(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (ll i = 0; i < n; i++)
        {
            v[i] = {b[i], a[i]};
        }

        sort(v.begin(), v.end());

        ll res = p;
        ll shared = 1;

        for (auto it : v)
        {
            ll cost = it.first;
            ll canShare = it.second;

            if (cost >= p)
            {
                break; 
            }

            if (shared + canShare > n)
            {
                res += (n - shared) * cost;
                shared = n;
                break;
            }
            else
            {
                res += canShare * cost;
                shared += canShare;
            }
        }

        res += (n - shared) * p;
        cout << res << endl;
    }
    return 0;
}
