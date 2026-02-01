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
        ll a, b;
        cin >> a >> b;

        ll res = INT_MAX;
        for (int add = 0; add < 32; add++)
        {
            ll ops = add;
            ll newB = b + add;
            if (newB == 1)
            {
                continue;
            }
            ll newA = a;
            while (newA > 0)
            {
                newA = newA / newB;
                ops++;
            }
            res = min(res, ops);
        }
        cout << res << endl;
    }

    return 0;
}
