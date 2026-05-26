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

        vector<ll> x(n);
        vector<ll> y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        if (n % 2 != 0)
        {
            cout << 1 << "\n";
        }
        else
        {
            ll ways_x = x[n / 2] - x[n / 2 - 1] + 1;
            ll ways_y = y[n / 2] - y[n / 2 - 1] + 1;

            cout << ways_x * ways_y << "\n";
        }
    }

    return 0;
}
