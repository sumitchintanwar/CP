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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> r(m);
        for (int i = 0; i < n; i++)
        {
            r[a[i] % m]++;
        }
        int res = 0;
        if (r[0] > 0)
        {
            res++;
        }
        for (int i = 1; i <= m / 2; i++)
        {
            if (i == m - i)
            {
                if (r[i] > 0)
                {
                    res++;
                }
            }
            else
            {
                int x = r[i];
                int y = r[m - i];

                int mini = min(x, y);
                int maxi = max(x, y);

                res += 1 + max(0, maxi - mini - 1);
            }
        }
        cout << res << "\n";
    }

    return 0;
}
