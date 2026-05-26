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
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        a[0] = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll pairs = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0;
        int j = 0;
        while (i < n && j < n)
        {
            if (a[i] < b[j])
            {
                pairs++;
                i++;
            }
            j++;
        }

        ll res = n - pairs;

        cout << res << "\n";
    }

    return 0;
}
