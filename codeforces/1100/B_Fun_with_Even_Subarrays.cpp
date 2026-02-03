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
        int i = n - 1;
        while (i >= 0 && a[i] == a[n - 1])
        {
            i--;
        }

        if (i == -1)
        {
            cout << 0 << "\n";
            continue;
        }
        ll res = 0;
        while (i >= 0)
        {
            i -= n - 1 - i;
            res++;

            while (i >= 0 && a[i] == a[n - 1])
            {
                i--;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
