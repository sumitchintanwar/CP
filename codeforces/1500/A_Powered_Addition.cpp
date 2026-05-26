#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
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

        ll maxi = a[0];
        ll diff = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < maxi)
            {
                diff = max(diff, maxi - a[i]);
            }
            else
            {
                maxi = a[i];
            }
        }

        if (diff == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        int res = 0;
        while (diff > 0)
        {
            diff >>= 1;
            res++;
        }

        cout << res << "\n";
    }

    return 0;
}
