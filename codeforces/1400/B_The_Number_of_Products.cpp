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

        // ARRAY INPUT
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> parity(n);
        ll neg = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                neg++;
            }
            parity[i] = neg % 2;
        }

        ll even = 1;
        ll odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (parity[i] == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        ll res1 = even * (even - 1) / 2 + odd * (odd - 1) / 2;
        ll res2 = odd * even;

        cout << res2 << " " << res1 << "\n";
    }

    return 0;
}
