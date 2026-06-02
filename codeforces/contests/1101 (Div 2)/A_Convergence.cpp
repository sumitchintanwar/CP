#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll res = n;
    for (int i = 0; i < n; i++)
    {
        ll L = lower_bound(a.begin(), a.end(), a[i]) - a.begin();
        ll R = n - (upper_bound(a.begin(), a.end(), a[i]) - a.begin());

        res = min(res, max(L, R));
    }

    cout << res << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
