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
        ll a, b, k;
        cin >> a >> b >> k;

        vector<ll> boys(a + 1, 0);
        vector<ll> girls(b + 1, 0);

        for (int i = 0; i < k; i++)
        {
            ll temp;
            cin >> temp;
            boys[temp]++;
        }

        for (int i = 0; i < k; i++)
        {
            ll temp;
            cin >> temp;
            girls[temp]++;
        }

        ll res = (k - 1) * k / 2;

        for (int i = 1; i <= a; i++)
        {
            res -= (boys[i] - 1) * boys[i] / 2;
        }
        for (int i = 1; i <= b; i++)
        {
            res -= (girls[i] - 1) * girls[i] / 2;
        }

        cout << res << "\n";
    }

    return 0;
}
