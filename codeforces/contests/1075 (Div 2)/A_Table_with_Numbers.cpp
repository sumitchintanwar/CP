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
        ll n, h, l;
        cin >> n >> h >> l;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll hnum = 0;
        ll lnum = 0;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > h && a[i] > l)
            {
                continue;
            }
            total++;
            if (a[i] <= h)
            {
                hnum++;
            }
            if (a[i] <= l)
            {
                lnum++;
            }
        }

        ll mini = min({hnum, lnum, total / 2});
        cout << mini << endl;
    }

    return 0;
}
