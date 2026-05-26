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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> res;

        res.push_back(a[0]);

        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i] > a[i - 1] && a[i] > a[i + 1]) ||
                (a[i] < a[i - 1] && a[i] < a[i + 1]))
            {
                res.push_back(a[i]);
            }
        }

        res.push_back(a[n - 1]);

        cout << res.size() << "\n";
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}