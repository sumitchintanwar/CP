#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<ll> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<ll> temp(n);
    temp[n - 1] = max(a[n - 1], b[n - 1]);

    for (int i = n - 2; i >= 0; i--)
    {
        temp[i] = max({a[i], b[i], temp[i + 1]});
    }

    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + temp[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}