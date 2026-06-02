#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> diff(n + 1, 0);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        diff[l]++;
        diff[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
    }

    sort(diff.rbegin(), diff.rend());
    sort(a.rbegin(), a.rend());

    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        res += a[i] * diff[i];
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
