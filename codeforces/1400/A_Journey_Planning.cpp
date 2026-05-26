#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        unordered_map<ll, ll> mpp;

        for (int i = 1; i <= n; i++)
        {
            mpp[b[i] - i] += b[i];
        }

        ll res = 0;
        for (auto [el, cnt] : mpp)
        {
            res = max(res, cnt);
        }
        cout << res << "\n";
    }

    return 0;
}
