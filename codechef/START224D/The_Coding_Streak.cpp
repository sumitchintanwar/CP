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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll res = 0;
        ll curr = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                curr++;
            }
            else
            {
                res = max(res, curr);
                curr = 0;
            }
            res = max(res, curr);
        }
        cout << res << "\n";
    }

    return 0;
}
