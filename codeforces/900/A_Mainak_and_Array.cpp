#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll res = a[n - 1] - a[0];

        for (int i = 1; i < n; i++)
        {
            res = max(res, a[i] - a[0]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            res = max(res, a[n - 1] - a[i]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            res = max(res, a[i] - a[i + 1]);
        }

        cout << res << endl;
    }
    return 0;
}
