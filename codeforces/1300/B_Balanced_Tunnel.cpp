#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> intime(n + 1);
        vector<ll> outtime(n + 1);
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            intime[a[i]] = i;
        }

        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            outtime[b[i]] = i;
        }
        ll res = 0;
        ll maxi = -1;
        for (int i = 0; i < n; i++)
        {
            if (outtime[a[i]] < maxi)
            {
                res++;
            }
            else
            {
                maxi = outtime[a[i]];
            }
        }
        cout << res << "\n";
    }

    return 0;
}
