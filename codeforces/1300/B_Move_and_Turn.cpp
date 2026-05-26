#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll t;
    // cin >> t;
    // while (t--)
    // {
    ll n;
    cin >> n;
    ll m = n / 2;
    ll res = 0;
    if (n % 2 == 0)
    {
        res = (m + 1) * (m + 1);
    }
    else
    {
        res = 2 * (m + 1) * (m + 2);
    }
    cout << res << "\n";
    // }

    return 0;
}
