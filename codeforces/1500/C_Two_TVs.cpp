#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }

    vector<pair<ll, ll>> temp;
    for (int i = 0; i < n; i++)
    {
        temp.push_back({l[i], 1});
        temp.push_back({r[i] + 1, -1});
    }

    sort(temp.begin(), temp.end());

    ll s = 0;
    for (auto it : temp)
    {
        s += it.second;
        if (s > 2)
        {
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
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
