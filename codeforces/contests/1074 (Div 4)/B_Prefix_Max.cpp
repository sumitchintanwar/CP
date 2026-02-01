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
        ll maxi = *max_element(a.begin(), a.end());
        // ll ind = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == maxi)
        //     {
        //         ind = i;
        //         break;
        //     }
        // }
        // if (ind != 0)
        // {
        //     swap(a[ind], a[0]);
        // }
        // ll res = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     res += max(res, a[i]);
        // }

        cout << maxi * n << endl;
    }

    return 0;
}
