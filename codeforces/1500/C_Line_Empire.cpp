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
        ll n, a, b;
        cin >> n >> a >> b;

        vector<ll> x(n + 1);
        x[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> x[i];
        }

        ll totalCost = 0;
        ll currCapital = 0;

        for (int i = 1; i <= n; i++)
        {
            totalCost += b * (x[i] - currCapital);
            ll shiftCost = a * (x[i] - currCapital);
            ll futureSave = (n - i) * b * (x[i] - currCapital);
            if (shiftCost < futureSave)
            {
                totalCost += shiftCost;
                currCapital = x[i];
            }
        }
        cout << totalCost << "\n";
    }

    return 0;
}
