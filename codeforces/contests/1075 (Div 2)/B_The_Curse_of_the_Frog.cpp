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
        ll n, x;
        cin >> n >> x;

        ll reach = 0;
        ll maxi = INT_MIN;
        ll curr = 0;
        while (n--)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            reach += (b - 1) * a;
            curr = (a * b) - c;
            if (maxi < curr)
            {
                maxi = curr;
            }
        }
        if (reach >= x)
        {
            cout << "0" << endl;
            continue;
        }
        if (maxi <= 0)
        {
            cout << "-1" << endl;
            continue;
        }
        ll req = x - reach;
        ll res = (req + maxi - 1) / maxi;
        cout << res << endl;
    }

    return 0;
}
