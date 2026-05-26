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

        vector<ll> k(n);
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        sort(k.begin(), k.end(), greater<int>());

        vector<ll> c(m + 1);
        for (int i = 1; i <= m; i++)
        {
            cin >> c[i];
        }
        ll res = 0;
        ll gift = 1;
        for (int i = 0; i < n; i++)
        {
            if (k[i] >= gift)
            {
                res += c[gift];
                gift++;
            }
            else
            {
                res += c[k[i]];
            }
        }
        cout << res << "\n";
    }

    return 0;
}
