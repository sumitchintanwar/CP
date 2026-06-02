#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    ll g = a[0];
    ll cnt = 0;
    for (auto i : a)
    {
        g = gcd(g, i);
        if (i == 1)
        {
            cnt++;
        }
    }

    if (g > 1)
    {
        cout << "-1\n";
        return;
    }

    if (cnt)
    {
        cout << n - cnt << '\n';
        return;
    }

    ll res = 2 * n;

    for (int i = 0; i < n; i++)
    {
        ll curr = a[i];
        for (int j = i + 1; j < n; j++)
        {
            curr = gcd(curr, a[j]);
            if (curr == 1)
            {
                res = min(res, (n - 1) + (j - i));
                break;
            }
        }
    }

    cout << res << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
