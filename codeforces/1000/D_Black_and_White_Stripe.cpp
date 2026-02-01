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
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<ll> prefix(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + (s[i] == 'W');
        }

        ll res = INT_MAX;
        for (int i = 0; i <= n - k; i++)
        {
            ll diff = prefix[i + k] - prefix[i];
            res = min(res, diff);
        }

        cout << res << "\n";
    }

    return 0;
}
