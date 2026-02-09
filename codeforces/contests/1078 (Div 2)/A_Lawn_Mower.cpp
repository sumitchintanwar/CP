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
        ll n, w;
        cin >> n >> w;
        if (w == 1)
        {
            cout << 0 << "\n";
        }
        else
        {

            ll div = n / w;
            ll res = n - div;
            cout << res << "\n";
        }
    }

    return 0;
}
