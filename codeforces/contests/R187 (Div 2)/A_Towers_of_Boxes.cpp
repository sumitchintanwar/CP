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
        ll n, m, d;
        cin >> n >> m >> d;

        if (m > d)
        {
            cout << n << "\n";
            continue;
        }

        ll init = (d / m) + 1;
        ll res = (n + init - 1) / init;
        cout << res << "\n";
    }

    return 0;
}
