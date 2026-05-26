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
        ll n, x, y;
        cin >> n >> x >> y;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll res = 0;
        map<pair<ll, ll>, ll> mpp;
        for (int i = 0; i < n; i++)
        {
            ll rx = a[i] % x;
            ll ry = a[i] % y;

            ll targetX = (x - rx) % x;
            ll targetY = ry;

            if (mpp[{targetX, targetY}])
            {
                res += mpp[{targetX, targetY}];
            }
            mpp[{rx, ry}]++;
        }
        cout << res << "\n";
    }

    return 0;
}
