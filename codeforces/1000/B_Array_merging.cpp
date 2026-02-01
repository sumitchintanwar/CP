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
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<ll> longestA(2 * n + 1);
        vector<ll> longestB(2 * n + 1);
        ll cnt = 1;

        for (ll i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                cnt++;
            }
            else
            {
                longestA[a[i - 1]] = max(longestA[a[i - 1]], cnt);
                cnt = 1;
            }
        }

        longestA[a[n - 1]] = max(longestA[a[n - 1]], cnt);
        cnt = 1;

        for (ll i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
            {
                cnt++;
            }
            else
            {
                longestB[b[i - 1]] = max(longestB[b[i - 1]], cnt);
                cnt = 1;
            }
        }

        longestB[b[n - 1]] = max(longestB[b[n - 1]], cnt);

        ll res = -1;
        for (ll i = 1; i < 2 * n + 1; i++)
        {
            res = max(res, longestA[i] + longestB[i]);
        }
        cout << res << "\n";
    }

    return 0;
}
