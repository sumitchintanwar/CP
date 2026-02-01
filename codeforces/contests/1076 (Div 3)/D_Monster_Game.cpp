#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

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

        sort(a.begin(), a.end());

        vector<ll> p(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            p[i + 1] = p[i] + b[i];
        }

        ll res = 0;
        int lvl = n;
        for (int i = 0; i < n; i++)
        {
            ll x = a[i];
            ll q = n - i;

            while (lvl > 0 && p[lvl] > q)
            {
                lvl--;
            }

            res = max(res, x * lvl);
        }

        cout << res << "\n";
    }

    return 0;
}