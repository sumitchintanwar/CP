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
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;
        int boys = b / x;
        int girls = g / y;
        int maxi = min(boys, girls);
        int total = b + g;
        int res = (total + n - 1) / n;

        if (res <= maxi)
        {
            cout << res << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
