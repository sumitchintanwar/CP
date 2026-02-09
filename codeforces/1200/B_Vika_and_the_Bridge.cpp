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

        vector<ll> lastPos(k + 1, 0);
        vector<ll> max1(k + 1, 0);
        vector<ll> max2(k + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            ll c;
            cin >> c;

            ll dist = i - lastPos[c];

            if (dist > max1[c])
            {
                max2[c] = max1[c];
                max1[c] = dist;
            }
            else if (dist > max2[c])
            {
                max2[c] = dist;
            }
            lastPos[c] = i;
        }
        ll res = LLONG_MAX;
        for (int i = 1; i <= k; i++)
        {
            ll dist = n + 1 - lastPos[i];

            if (dist > max1[i])
            {
                max2[i] = max1[i];
                max1[i] = dist;
            }
            else if (dist > max2[i])
            {
                max2[i] = dist;
            }

            ll curr = max((max1[i] + 1) / 2, max2[i]);
            res = min(res, curr);
        }
        cout << res - 1 << "\n";
    }

    return 0;
}
