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
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<ll> gaps;
        for (int i = 0; i < n - 1; i++)
        {
            gaps.push_back(b[i + 1] - b[i]);
        }

        ll res = b[n - 1] - b[0];
        sort(gaps.rbegin(), gaps.rend());
        for (int i = 0; i < k - 1; i++)
        {
            res -= gaps[i];
        }
        cout << res + k << "\n";
    }
    return 0;
}
