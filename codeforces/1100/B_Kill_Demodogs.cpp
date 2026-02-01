#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll mod = 1000000007;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        // ll i = 1;
        // ll j = 1;
        // ll sum = 0;
        // while (i <= n && j <= n)
        // {

        //     sum += (i * j);
        //     if ((i + j) % 2 == 0)
        //     {
        //         j++;
        //     }
        //     else
        //     {
        //         i++;
        //     }
        // }
        // sum = sum % mod;
        // cout << (sum * 2022) % mod << "\n";

        ll a = n;
        ll b = n + 1;
        ll c = 4 * n - 1;

        ll res = ((((a * b) % mod * c) % mod) * 337) % mod;

        cout << res << "\n";
    }

    return 0;
}
