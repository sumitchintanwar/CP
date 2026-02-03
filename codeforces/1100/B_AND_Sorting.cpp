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

        ll res = pow(2, 30) - 1;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if (a != i)
            {
                res = res & a;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
